/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:58:07 by abourbou          #+#    #+#             */
/*   Updated: 2021/03/02 20:22:58 by abourbou         ###   ########lyon.fr   */
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
			_size = 0;
		}
		Array(unsigned int n)
		{
			_ptr = new T[n];
			_size = n;
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
			unsigned int	i = 0;
			while (i < _size)
			{
				_ptr[i] = cpy._ptr[i];
				i++;
			}
			return (*this);
		}
		T			&operator[](unsigned int index)
		{
			if (index > _size - 1)
				throw(OutOfRange());
			return (_ptr[index]);
		}
		int			size(void)
		{
			return (_size);
		}
	//exception
	class	OutOfRange : public std::exception {
		public:
			virtual const char *what(void) const throw()
				{return ("Index out of range");}
	};
	private:
		T				*_ptr;
		unsigned int	_size;
};

#endif