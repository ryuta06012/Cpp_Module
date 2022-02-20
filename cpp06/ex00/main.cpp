/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:28:02 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/18 15:41:41 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void convert(int argc, char *argv[]) {
	(void)argc;
	try
	{
		Convert convert(argv[1]);
		std::cout << argv[1] << std::endl;
		//convert.initCheck();
		
	}
	catch(const std::exception& e)
	{
		std::cout << "error" << std::endl;
		std::cerr << e.what() << '\n';
	}
}

int main(int argc, char *argv[]) {
	if (argc != 2)
		std::cout << "Not enough arguments" << std::endl;
	convert(argc, argv);
	return 0;
}