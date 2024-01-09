/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:05:35 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 19:05:37 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    a =Fixed(1234.4321f);

    std::cout << "a is: " << a.toFloat() << std::endl;
    std::cout << "b is: " << b.toFloat() << std::endl;
    std::cout << "c is: " << c.toFloat() << std::endl;
    std::cout << "d is: " << d.toFloat() << std::endl;

    std::cout << "a is: " << a.toInt() << " as integer." << std::endl;
    std::cout << "a is: " << b.toInt() << " as integer." << std::endl;
    std::cout << "a is: " << c.toInt() << " as integer." << std::endl;
    std::cout << "a is: " << d.toInt() << " as integer." << std::endl;
   
    return (0);
}
