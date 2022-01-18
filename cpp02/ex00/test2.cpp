/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:27:19 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/18 17:02:31 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stdlib.h>
using namespace std;

class Kitty {
	int *x;
public:
	Kitty();
	Kitty(const Kitty &);
	~Kitty();
	void printX();
} g_obj ;

Kitty::Kitty() {
	x = (int *)malloc(5 * sizeof(int ));
	for (int i = 0 ; i < 5 ; i++) *(x + i) = i * 2;
}

Kitty::Kitty(const Kitty &obj) { 
	x = (int *)malloc(5 * sizeof(int ));
	for (int i = 0 ; i < 5 ; i++) *(x + i) = i;
}

Kitty::~Kitty() {
	free(x);
	//x = NULL;
	}

void Kitty::printX()
{
	for (int i = 0 ; i < 5 ; i++) cout << x << " " << *(x + i) << " ";
	cout << '\n';
}

int main() {
	Kitty obj(g_obj);
	obj.printX();
	obj = g_obj;
	g_obj.printX();
	obj.printX();
	return 0;
}