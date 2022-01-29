/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:02:33 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/29 19:48:58 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a(10);
Fixed const b( Fixed( 0.6f ) * Fixed( 2 ) );
std::cout << "a: " << a << "b: " << b << std::endl;
std::cout << "a * b" << std::endl;
std::cout << a * b << std::endl;
std::cout << "a + b" << std::endl;
std::cout << a + b << std::endl;
std::cout << "a - b" << std::endl;
std::cout << a - b << std::endl;
std::cout << "a / b" << std::endl;
std::cout << a / b << std::endl;
std::cout << "a < b" << std::endl;
std::cout << (a < b) << std::endl;
std::cout << "a > b" << std::endl;
std::cout << (a > b) << std::endl;
std::cout << "a <= b" << std::endl;
std::cout << (a <= b) << std::endl;
std::cout << "a >= b" << std::endl;
std::cout << (a >= b) << std::endl;
std::cout << "a == b" << std::endl;
std::cout << (a == b) << std::endl;
std::cout << "a != b" << std::endl;
std::cout << (a != b) << std::endl;
std::cout << "a: " << a++ << "a++: " << a << std::endl;
std::cout << "a: " << ++a << "++a: " << a << std::endl;

/* std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl; */
//std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}