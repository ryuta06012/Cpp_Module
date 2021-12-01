/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:25:02 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/01 14:35:33 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string &stringREF = str;
	std::string *stringPTR = &str;
	std::cout << "stringREF" << '\t' << &stringREF << '\t' << stringREF << std::endl;
	std::cout << "stringPTR" << '\t' << stringPTR << '\t' << *stringPTR << std::endl;
	return (0);
}