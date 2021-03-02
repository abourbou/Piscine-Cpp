/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:58:07 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 16:06:02 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <exception>
#include <iostream>

template <typename T>
class	Array
{
	public:
	// exception class ref
		class	NegativeSize;
		class	OutofRange;
		Array(void)
		{

			_ptr = new T[0];
		}
		Array(int n)
		{
			if (n < 0)
				throw(NegatifSize());
			_ptr = new T[n];
		}
		Array(Array const &cpy)
		{
			_ptr = 0;
			*this = cpy;
		}
		~Array(void)
		{
			delete[] _ptr;
		}
		Array	&operator=(Array const &cpy)
		{
			if (this == &cpy)
				return (*this);
			if (_ptr)
				delete[] _ptr;
			_size = cpy._size;
			_ptr = new T[_size];
			int	i = 0;
			while (i < _size)
			{
				_ptr[i] = cpy[i];
				i++;
			}
			return (*this);
		}
		T			&operator[](int index)
		{
			if (index < 0)
				throw(NegatifSize());
			else if (index > _size)
				throw(OutOfRange());
			return (_ptr[index]);
		}
		int			size(void)
		{
			return (_size);
		}
	//exceptions
	class	NegatifSize : public std::exception {
		public:
			virtual const char *what(void) const throw()
			{ return ("Negatif size of array");}
	};
	class	OutOfRange : public std::exception {
		public:
			virtual const char *what(void) const throw()
				{return ("Index out of range");}
	};
	private:
		T		*_ptr;
		int		_size;
};

#endif