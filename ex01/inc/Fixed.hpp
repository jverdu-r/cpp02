/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:05:18 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 19:05:19 by jverdu-r         ###   ########.fr       */
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
        int getRawBits(void) const;
        void setRawBits(const int raw);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int _pf;
        static const int _nbFrac = 8;
    
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
