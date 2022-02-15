/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:59:45 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/15 16:07:37 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <cstdlib>
#include <fstream>

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();
		void action() const;
};


#endif
