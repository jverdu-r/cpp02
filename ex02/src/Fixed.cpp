/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:06:07 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 12:34:43 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) : _pf(0)
{
}

Fixed::Fixed(const int value)
{	
	this->_pf = value << this->_nbFrac;
}

Fixed::Fixed(const float value)
{
	this->_pf = roundf(value * (1 << this->_nbFrac));
}

Fixed::~Fixed() 
{
}

Fixed::Fixed(Fixed const &other) 
{
	*this = other;
}


Fixed&	Fixed::operator=(const Fixed &rhs) 
{
	if (this != &rhs)
		this->_pf = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() + rhs.toFloat());
	return result;
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() - rhs.toFloat());
	return result;
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());
	return result;
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());
	return result;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

Fixed	Fixed::operator++(int value)
{
	Fixed tmp(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return tmp;
}

Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator--(int value)
{
	Fixed tmp(*this);

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() - value);
	return tmp;
}

Fixed	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

int Fixed::getRawBits(void) const 
{
	return this->_pf;
} 

void Fixed::setRawBits(int const raw) 
{
	this->_pf = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)this->_pf / (float)(1 << this->_nbFrac);
}

int Fixed::toInt( void ) const
{
	return this->_pf >> this->_nbFrac;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}