/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:49:26 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/02 13:46:21 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(const std::string);
	~Weapon();
	std::string const &getType();
	void	setType(std::string newType);
};

#endif
