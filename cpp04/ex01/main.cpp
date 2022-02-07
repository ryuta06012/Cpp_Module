/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:21:40 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 09:16:45 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << CYN <<"----------TES1 START!---------" << NC << std::endl;
    {
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
		system("leaks a.out");
	}
	std::cout << CYN <<"----------TES1 END!---------" << NC << std::endl;
	std::cout << CYN <<"----------TES2 START!---------" << NC << std::endl;
    {
		Animal *test[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				test[i] = new Dog();
			else
				test[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
			delete test[i];
		system("leaks a.out");
	}
	std::cout << CYN <<"----------TES2 END!---------" << NC << std::endl;
}
