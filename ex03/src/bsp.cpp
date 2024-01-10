/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:17:10 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 19:17:12 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Fixed area(Point const a, Point const b, Point const c)
{
    Fixed area = a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety());
    if (area < 0)
        return (area * Fixed(-1.0f));
    return (area / Fixed(2.0f));
}

bool bsp(Point const  a, Point const  b, Point const  c, Point const  point)
{
    Fixed t_area = area(a, b, c);
    Fixed area_1 = area(point, b, c);
    Fixed area_2 = area(a, point, c);
    Fixed area_3 = area(a, b, point);
    return (t_area == (area_1 + area_2 + area_3));
}
