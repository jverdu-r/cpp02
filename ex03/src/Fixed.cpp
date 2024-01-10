/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:14:38 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 19:15:02 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                
#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
    this->_pf = 0;
}

Fixed::Fixed(const int i)
{
    this->_pf = i << this->_nbFrac;
}

Fixed::Fixed(const float f)
{
    this->_pf = roundf(f *(1 << this->_nbFrac));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        this->_pf = fixed.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &fixed)
{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed)
{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed)
{
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed)
{
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed)
{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed)
{
    return (this->toFloat() != fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
    return ((this->_pf * fixed._pf) >> _nbFrac);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
    return ((this->_pf << _nbFrac) / fixed._pf);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
    return (this->_pf + fixed._pf);
}

Fixed Fixed::operator-(const Fixed &fixed)
{
    return (this->_pf - fixed._pf);
}

Fixed Fixed::operator++(int)
{
    Fixed ret(*this);
    ++(*this);
    return (ret);
}

Fixed &Fixed::operator++(void)
{
    _pf += 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed ret(*this);
    --(*this);
    return (ret);
}

Fixed &Fixed::operator--(void)
{
    _pf -= 1;
    return (*this);
}

Fixed::~Fixed(void)
{
    return;
}

int Fixed::getRawBits(void) const
{
    return (this->_pf);
}

void Fixed::setRawBits(const int raw)
{
    this->_pf = raw;
}

float Fixed::toFloat(void) const
{
    return (roundf((float)this->_pf) / (1 << this->_nbFrac));
}

int Fixed::toInt(void) const
{
    return (this->_pf >> this->_nbFrac);
}

Fixed &Fixed::min(Fixed &i, Fixed &j)
{
    if (i.toFloat() > j.toFloat())
        return (j);
    return (i);
}

Fixed &Fixed::min(const Fixed &i, const Fixed &j)
{
    if (i.toFloat() > j.toFloat())
        return ((Fixed&)j);
    return ((Fixed&)i);
}

Fixed &Fixed::max(Fixed &i, Fixed &j)
{
    if (i.toFloat() < j.toFloat())
        return (j);
    return (i);
}

Fixed &Fixed::max(const Fixed &i, const Fixed &j)
{
    if (i.toFloat() < j.toFloat())
        return ((Fixed&)j);
    return ((Fixed&)i);  
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}
