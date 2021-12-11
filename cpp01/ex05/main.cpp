/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 05:45:08 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/12 04:16:39 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	test(Karen &karen, std::string str)
{
	karen.complain(str);
}

int	main()
{
	Karen	karen;
	
	std::cout << "DEBUG" << std::endl;
	test(karen, "DEBUG");
	std::cout << "WARNING" << std::endl;
	test(karen, "WARNING");
	std::cout << "INFO" << std::endl;
	test(karen, "INFO");
	std::cout << "ERROR" << std::endl;
	test(karen, "ERROR");
	std::cout << "aaaa" << std::endl;
	test(karen, "aaaa");

	return (0);
}