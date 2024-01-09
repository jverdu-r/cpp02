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

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called." <<std::endl;
    *this = fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assigment operator called." <<std::endl;
    if (this != &fixed)
        this->_pf = fixed.getRawBits();
    return (*this);
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
