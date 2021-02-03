/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:34:04 by abourbou          #+#    #+#             */
/*   Updated: 2021/02/03 21:58:19 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_point_value;
		static const int	_width = 8;

	public:
		Fixed(void);
		Fixed(Fixed const &cpy);
		~Fixed(void);

		void	operator=(Fixed const &cpy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif