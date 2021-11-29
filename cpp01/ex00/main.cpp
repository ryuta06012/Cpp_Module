/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:02:03 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/29 19:07:48 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void	test()
{
	//Zombie test1;
	Zombie *test2;

	test2 = newZombie("test2");
	test2->announce();
	randomChump("hryuuta");
	delete test2;
}

int	main()
{
	test();
}



