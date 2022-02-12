/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:20:35 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/11 09:22:50 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include <iostream>

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &other);
		AMateria* clone() const;
		void	use(ICharacter &target);
};

#endif
