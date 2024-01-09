/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:05:27 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 19:05:29 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called." << std::endl;
    this->_pf = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called." << std::endl;
    this->_pf = i << this->_nbFrac;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called." << std::endl;
    this->_pf = roundf(f *(1 << this->_nbFrac));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called." <<std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assigment operator called." <<std::endl;
    if (this != &fixed)
        this->_pf = fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->_pf);
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawbits member function called." << std::endl;
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