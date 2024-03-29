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

    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "c is: " << c << std::endl;
    std::cout << "d is: " << d << std::endl;

    std::cout << "a is: " << a << " as integer." << std::endl;
    std::cout << "a is: " << b << " as integer." << std::endl;
    std::cout << "a is: " << c << " as integer." << std::endl;
    std::cout << "a is: " << d << " as integer." << std::endl;
   
    return (0);
}
