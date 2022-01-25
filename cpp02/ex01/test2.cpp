/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:20:25 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/25 14:02:30 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class CMyclass
{
	public:
	CMyclass();
	~CMyclass();
	int num;
	int *ptr;
	private:
};

CMyclass::CMyclass():num(12)
{
	std::cout << "construct called" << std::endl;
	ptr = (int *)malloc(sizeof(10));
	for (int i=0; i < sizeof(ptr); i++)
	{
		ptr[i] = i;
	}
}

CMyclass::~CMyclass()
{
	std::cout << "destruct called" << std::endl;
}

int main() {
	CMyclass class1;
	CMyclass class2(class1);

	//class2 = class1;
	class2.ptr[0] = 12;
	std::cout << "class2: " << &class2 << " class1: " << &class1 << std::endl;
	std::cout << "class2.ptr: "<< &class2.ptr[0] << " class1.ptr: "<<&class1.ptr[0] << std::endl;
	std::cout << "class2: "<< class2.ptr[0] << " class1: "<<class1.ptr[0] << std::endl;
}