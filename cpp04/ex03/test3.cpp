/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:55:14 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/11 15:16:50 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
public:
	int n;
	Base() {std::cout << "Base Constructor called" << std::endl;}
	~Base() {std::cout << "Base destructor called" << std::endl;}
    void f(int n) {
		//n = 10;
		std::cout << n << std::endl;
	}
};

class Derived : public Base {
public:
    using Base::f;  // Base::f をこのスコープに取り込む
	Derived() {
		std::cout << "Derived Constructor called" << std::endl;
		n = 40;
		}
	~Derived() {std::cout << "Derived Destructor called" << std::endl;}
    void f(const char* s) {}
    void g()
    {
        f("xyz");     // OK。Derived::fメンバ関数を呼び出す
        f(10);        // OK。Base::fメンバ関数を呼び出す
       // Base::f(10);  // OK。Base::fメンバ関数を呼び出す
    }
};

int main()
{
   // Base b;
    Derived d;

	Base &b = d;

	b.f(b.n);
   /*  b.f(10);     // OK。Base::fメンバ関数を呼び出す
    d.f("xyz");  // OK。Derived::fメンバ関数を呼び出す
    d.f(10);     // OK。Base::fメンバ関数を呼び出す */
}