/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 05:45:02 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/12 05:35:17 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

# include <string>
# include <iostream>
# include <fstream>

enum e_level
{
	NON,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
	void	_non(void);
	void	(Karen::*f[5])(void);
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};


#endif
