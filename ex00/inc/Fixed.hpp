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

class Fixed
{
    private:
        int _pf;
        static const int _nbFrac = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        ~Fixed(void);
        Fixed &operator=(const Fixed &fixed);

        int getRawBits(void) const;
        void setRawBits(const int raw);
};
#endif
