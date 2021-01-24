/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourbou <abourbou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:23:04 by abourbou          #+#    #+#             */
/*   Updated: 2021/01/23 20:20:56 by abourbou         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample
{

public:

	int		publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;

private:

	int		_privateFoo;

	void	_privateBar(void) const;

};

#endif