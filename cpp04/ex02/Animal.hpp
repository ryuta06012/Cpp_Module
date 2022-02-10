/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:22:54 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/07 15:09:49 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define NC "\e[0m"
#define RED "\e[0;31m"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};
#endif
