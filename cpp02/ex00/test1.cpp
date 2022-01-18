/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:22:19 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/18 16:24:29 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Kitty {
public:
	Kitty() { cout << "Kitty on your lap\n"; }
	Kitty(const Kitty &obj) { cout << "Di Gi Gharat\n"; }
}g_obj;

Kitty getKitty(Kitty obj) {
	return obj;
}

int main() {
	Kitty obj;
	obj = g_obj;
	
	return 0;
}