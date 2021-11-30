/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:16:00 by hryuuta           #+#    #+#             */
/*   Updated: 2021/11/30 16:36:10 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	test(void)
{
	Zombie	*test1;
	int	n;

	n = 10;
	test1 = ZombieHorde(n, "hryuuta");
	for (int i=0; i<n; i++)
		test1[i].announce();
	delete[] test1;
}

int main()
{
	test();
	return (0);
}