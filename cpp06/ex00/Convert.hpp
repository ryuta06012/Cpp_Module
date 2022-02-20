/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:27:59 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/18 15:30:38 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <limits>
#include 


enum e_type { CHAR, INT, FLOAT, DOUBLE };

class Convert
{
private:
	std::string _str;
	char _c;
	int _i;
	float _f;
	double _d;
	e_type _type;
public:
	Convert();
	Convert(const std::string &str);
	~Convert();
	void initCheck();
	void typeCheck();
	void AcquisitionChar();
	void AcquisitionInt();
	void AcquisitionFloat();
	void AcquisitionDouble();
};

#endif
