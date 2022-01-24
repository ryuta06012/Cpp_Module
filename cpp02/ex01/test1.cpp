/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:28:13 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/24 15:16:35 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main() {
	int i = 8;
	int a;
	float f = 12.34;
	float ans;

	a = 1 << i;
	a = roundf(f * (1 << i));
	std::cout << a << std::endl;
	ans = (static_cast<float>(a)) / (1 << i);
	std::cout << "ans: " << ans << std::endl;
	std::cout << "a: " << static_cast<float>(a / (1 << i)) << std::endl;
}