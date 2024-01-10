/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:05:54 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 18:05:56 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &fixed);
        ~Fixed(void);
        Fixed &operator=(const Fixed &fixed);
        bool operator>(const Fixed &fixed);
        bool operator<(const Fixed &fixed);
        bool operator>=(const Fixed &fixed);
        bool operator<=(const Fixed &fixed);
        bool operator==(const Fixed &fixed);
        bool operator!=(const Fixed &fixed);
        Fixed operator*(const Fixed &fixed);
        Fixed operator/(const Fixed &fixed);
        Fixed operator+(const Fixed &fixed);
        Fixed operator-(const Fixed &fixed);
        Fixed operator++(int);
        Fixed &operator++(void);
        Fixed operator--(int);
        Fixed &operator--(void);
        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed &min(Fixed &i, Fixed &j);
        static Fixed &min(const Fixed &i, const Fixed &j);
        static Fixed &max(Fixed &i, Fixed &j);
        static Fixed &max(const Fixed &i, const Fixed &j);
    private:
        int _pf;
        static const int _nbFrac = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
