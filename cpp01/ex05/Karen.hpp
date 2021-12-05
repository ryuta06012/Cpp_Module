/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 05:45:02 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/06 03:53:23 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};


#endif
