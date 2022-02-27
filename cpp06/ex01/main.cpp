/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:55:41 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/27 11:20:51 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

struct Data
{
	int id;
	std::string name;
};

uintptr_t serialize(Data *ptr) { return reinterpret_cast<std::uintptr_t>(ptr); }

Data *deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main() {
	Data sample = {0, "hryuuta"};

	std::cout << "----------------init_DATA---------------" << std::endl;
	std::cout << "address = " << &sample << std::endl;
	std::cout << "id = " << sample.id << std::endl;
	std::cout << "name = " << sample.name << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	uintptr_t temp = serialize(&sample);
	Data *test = deserialize(temp);
	std::cout << "---------serialize & deserialize--------" << std::endl;
	std::cout << "address = " << test << std::endl;
	std::cout << "id = " << test->id << std::endl;
	std::cout << "name = " << test->name << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	return 0;
}
