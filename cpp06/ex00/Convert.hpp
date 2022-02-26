/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:27:59 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/27 03:48:16 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <limits>
#include <exception>
#include <iomanip>
#include <math.h>

#define IMAX std::numeric_limits<int>::max()
#define IMIN std::numeric_limits<int>::min()
#define FMAX std::numeric_limits<float>::max()
#define FMIN std::numeric_limits<float>::min()
#define CMAX std::numeric_limits<char>::max()
#define CMIN std::numeric_limits<char>::min()
#define DISCHAR "char: "
#define DISINT "int: "
#define DISFLOAT "float: "
#define DISDOUBLE "double: "


enum e_type { CHAR, INT, FLOAT, DOUBLE };

class Convert
{
private:
	std::string _str;
	bool _flag;
	int _setprecision;
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
	void disImp();
	double ft_strtod(const char *str);
	int ft_atoi(const char *str);
	float ft_atof(const char *str);
	void itoc(int num);
	void ftoi(float num);
	void ftoc(float num);
	void dtoi(double num);
	void dtof(double num);
	void dtoc(double num);
	void disDouble(double num);
	void disFloat(float num);
	void disInt(int num);
	void disChar(char num);
	void finiteCheck(double x);
	
};

#endif
