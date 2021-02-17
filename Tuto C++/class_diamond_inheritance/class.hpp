/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:33:29 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/17 11:33:32 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>

class A
{
private:
	int x;

public:
	A(void) : x(42)
	{
		std::cout << "A(default) created,";
	};
	A(int value) : x(value)
	{
		std::cout << "A(" << x << ") created, ";
	};
	A(A &copy) : x(copy.get_x())
	{
		std::cout << "A created by copy of " << this->x;
	}
	~A(void)
	{
		std::cout << "destructor A(" << x << ") called" << std::endl;
	};
	int get_x(void) { return (x); };

};

class B : virtual public A
{
public:
	B(int value) : A(value)
	{
		std::cout << "B(" << value << ") created, ";
	};
	~B(void)
	{
		std::cout << "destructor B(" << this->get_x() << ") called" << std::endl;
	};
};

class C : virtual public A
{
public:
	C(int value) : A(value)
	{ 
		std::cout << "C(" << value << ") created, ";
	};
	~C(void)
	{
		std::cout << "destructor C(" << this->get_x() << ") called" << std::endl;
	};
};

class D : public B, public C
{
	public:
	D(int vA, int v1, int v2) : A(vA), B(v1), C(v2)
	{
		std::cout << "D(" << v1 << ", "<< v2 << ") created ";
	}
	~D(void){
	std::cout << "destructor D(" << this->B::get_x() << ", ";
	std::cout << this->C::get_x() << ") called" << std::endl;
	};
};
#endif