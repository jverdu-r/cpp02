/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:17:22 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 19:17:24 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point(void): x(Fixed(0)), y(Fixed(0)){}

Point::Point(float const fx, float const fy): x(Fixed(fx)), y(Fixed(fy)){}

Point::Point(Point const &point)
{
    *this = point;
}

Point &Point::operator=(Point const &point)
{
    const_cast<Fixed&>(x) = point.getX();
    const_cast<Fixed&>(y) = point.getY();
    return (*this);
}

Point::~Point(void){return;}

Fixed Point::getX(void) const
{
    return ((Fixed)x);
}

Fixed Point::getY(void) const
{
    return ((Fixed)y);
}
