/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:48:57 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/30 17:40:12 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("hryuuta");

	a.attack("handa");
	a.beRepaired(20);
	a.takeDamage(20);
	b.attack("handa");
	b.beRepaired(20);
	b.takeDamage(20);
}