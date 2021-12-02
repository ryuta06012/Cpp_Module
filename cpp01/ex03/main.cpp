/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:00:41 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/02 15:53:14 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void	test()
{
	Weapon weapon = Weapon("hand");
	HumanA hryuuta = HumanA("hryuuta", "foot");
	HumanB handa = HumanB("handa");

	handa.setWeapon(weapon);

	handa.attack();
	hryuuta.attack();
	
	hryuuta.setType("hand");
	weapon.setType("foot");
	handa.attack();
	hryuuta.attack();
}

int	main()
{
	test();
	return (0);
}