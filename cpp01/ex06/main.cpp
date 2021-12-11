/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 05:45:08 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/12 05:38:00 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		checkLevel(std::string level)
{
	int i = ((level == "DEBUG") * 1) \
	+ ((level == "INFO") * 2) \
	+ ((level == "WARNING") * 3) \
	+ ((level == "ERROR") * 4);
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	Karen		karen;
	switch (checkLevel(argv[1]))
	{
		case DEBUG:
			std::cout << "[ " << "DEBUG" << " ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ " << "INFO" << " ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ " << "WARNING "<< " ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ " << "ERROR" << " ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			std::cout << std::endl;
			break;
	}
	return (0);
}