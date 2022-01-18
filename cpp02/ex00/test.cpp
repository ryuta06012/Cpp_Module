/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:41:11 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/18 16:25:34 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class Kitty {
public:
	char *str;
	Kitty() { str = "Kitty on your lap\n"; }
	Kitty(const Kitty &obj) { str = "Di Gi Gharat\n"; }
} g_obj ;

int main() {
	//Kitty obj = g_obj;
	Kitty obj(g_obj);
	//obj = g_obj;
	cout << g_obj.str;
	cout << obj.str;
	return 0;
}