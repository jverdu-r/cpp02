/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:05:54 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 12:36:12 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_pf;
		static const int	_nbFrac = 8;

	public:
	
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int value);
		Fixed(const float value);
		
		Fixed	&operator=(const Fixed &rhs);
		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;
		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;
		Fixed	operator++(int value);
		Fixed	operator++(void);
		Fixed	operator--(int value);
		Fixed	operator--(void);

		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};
#endif
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);
