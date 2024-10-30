/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:17:31 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 12:40:36 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int main(void)
{
    Point const a (0, 0);
    Point const b (10, 30);
    Point const c (20, 0);
    Point const in (10, 15);
    Point const out (30, 15);

    std::cout << "a: " << a.getX() << ", " << a.getY();
    std::cout << " b: " << b.getX() << ", " << b.getY();
    std::cout << " c: " << c.getX() << ", " << c.getY();
    std::cout << " in: " << in.getX() << ", " << in.getY();
    std::cout << " out: " << out.getX() << ", " << out.getY() << std::endl;

    std::cout << "in: " << ((bsp(a, b, c, in) == true) ? "is inside" : "is not inside") << std::endl;
    std::cout << "out: " <<((bsp(a, b, c, out) == true) ? "is inside" : "is not inside") << std::endl;
}
