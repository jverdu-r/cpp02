/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:14:18 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 19:16:27 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
    public:
        Point(void);
        Point(float const fx, float const fy);
        Point(Point const &point);
        ~Point(void);
        Point &operator=(Point const &point);
        Fixed getx(void) const;
        Fixed gety(void) const;
    private:
        Fixed const x;
        Fixed const y;
};
#endif
