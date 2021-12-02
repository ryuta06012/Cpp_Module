/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:21 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/02 15:29:22 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
private:
	std::string _name;
	Weapon _weapon;
public:
	HumanA(std::string name, std::string weapon);
	~HumanA();
	void	attack();
	void	setType(std::string);
};


#endif
