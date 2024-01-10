/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:17:31 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/10 19:17:33 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int main(void)
{
    Point const a (0, 0);
    Point const b (10, 30);
    Point const c (20, 0);
    Point const in (10, 15);
    Point const out (150, 300);

    std::cout << "a: " << a.getx() << ", " << a.gety();
    std::cout << " b: " << b.getx() << ", " << b.gety();
    std::cout << " c: " << c.getx() << ", " << c.gety();
    std::cout << " in: " << in.getx() << ", " << in.gety();
    std::cout << " out: " << out.getx() << ", " << out.gety() << std::endl;

    std::cout << "in: " << ((bsp(a, b, c, in) == true) ? "is inside" : "is not inside") << std::endl;
    std::cout << "out: " <<((bsp(a, b, c, out) == true) ? "is inside" : "is not inside") << std::endl;
}
