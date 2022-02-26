/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:27:53 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/27 05:12:46 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const std::string &str): _str(str), _flag(false), _setprecision(0) {}

Convert::~Convert() {}

void Convert::typeCheck() {
	 if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
        _type = FLOAT;
        _flag = true;
        return ;
    }
    if (_str == "-inf" || _str == "+inf" || _str == "nan") {
        _type = DOUBLE;
        _flag = true;
        return ;
    }
    if (_str.size() == 1 && std::isprint(_str[0]) && !std::isdigit(_str[0])) {
        _type = CHAR;
        return ;
    }
    if (_str[_str.size() - 1] == 'f') {
        _type = FLOAT;
        return ;
    }
    if (_str.find('.') != std::string::npos) {
        _type = DOUBLE;
		return ;
    }
    _type = INT;
}

void Convert::disChar(char num) {
    std::cout << DISCHAR;
    if (std::isprint(num))
        std::cout << "'" << num << "'";
    else
        std::cout << "Non displayable";
    std::cout << std::endl;
}

void Convert::disInt(int num) {
    std::cout << DISINT << num << std::endl;
}

void Convert::disFloat(float num) {
    std::cout << DISFLOAT << std::fixed << std::setprecision(_setprecision)
					<< num << "f" << std::endl;
}

void Convert::disDouble(double num) {
    std::cout << DISDOUBLE << std::fixed << std::setprecision(_setprecision)
					<< num << std::endl;
}

void Convert::itoc(int num) {
    if (num < CMIN || num > CMAX) {
        std::cout << DISCHAR << "impossible" << std::endl;
        return ;
    }
    return disChar(static_cast<char>(num));
}

void Convert::ftoc(float num) {
    if (num < static_cast<float>(CMIN) || num > static_cast<float>(CMAX) || _flag) {
        std::cout << DISCHAR << "impossible" << std::endl;
        return ;
    }
    return disChar(static_cast<char>(num));
}

void Convert::ftoi(float num) {
    if (num < static_cast<float>(IMIN) || num > static_cast<float>(IMAX) || _flag) {
        std::cout << DISINT << "impossible" << std::endl;
        return ;
    }
    return disInt(static_cast<int>(num));
}

void Convert::dtoc(double num) {
    if (num < static_cast<double>(CMIN) || num > static_cast<double>(CMAX) || _flag) {
        std::cout << DISCHAR << "impossible" << std::endl;
        return ;
    }
    return disChar(static_cast<char>(num));
}

void Convert::dtof(double num) {
    if (num < static_cast<double>(-FMAX) || num > static_cast<double>(FMAX)) {
        std::cout << DISFLOAT << "impossible" << std::endl;
        return ;
    }
    return disFloat(static_cast<float>(num));
}

void Convert::dtoi(double num) {
    if (num < static_cast<double>(IMIN) || num > static_cast<double>(IMAX) || _flag) {
        std::cout << DISINT << "impossible" << std::endl;
        return ;
    }
    return disInt(static_cast<int>(num));
}

void Convert::finiteCheck(double x) {
    if (fpclassify(x) == FP_NAN || fpclassify(x) == FP_INFINITE)
        _flag = true;
}

double Convert::ft_strtod(const char *str)
{
    char* end;
    errno = 0;
    double x = std::strtod(str, &end);
    if (str == end) {
        throw std::exception();
    }
    if (errno == ERANGE)
       throw std::exception();
    if (end != NULL && end[0] != '\0')
    {
        if (std::strlen(end) == 1 && end[0] == 'f') {
            finiteCheck(x);
            return x;
        }
        else
            throw std::exception();
    }
    finiteCheck(x);
    return x;
}

int Convert::ft_atoi(const char *str) {
    double num;

    num = ft_strtod(str);
    if (_flag || num < static_cast<double>(INT_MIN) || num > static_cast<double>(INT_MAX))
        throw std::exception();
    return static_cast<int>(num);
}

float Convert::ft_atof(const char *str) {
    double num;

    num = ft_strtod(str);
    if (!_flag && ( num < static_cast<double>(-FMAX) || num > static_cast<double>(FMAX)))
        throw std::exception();
    return static_cast<float>(num);
}

void Convert::disImp() {
    std::cout << DISCHAR << "impossible" << std::endl;
    std::cout << DISINT << "impossible" << std::endl;
    std::cout << DISFLOAT << "impossible" << std::endl;
    std::cout << DISDOUBLE << "impossible" << std::endl;
}

void Convert::AcquisitionChar() {
    try
    {
        int num = _str.at(0);
        if (num < CMIN || num > CMAX)
            throw std::exception();
        _setprecision = 1;
        disChar(num);
        disInt(num);
        disFloat(num);
        disDouble(num);
    }
    catch(const std::exception& e)
    {
        disImp();
    }
}

void Convert::AcquisitionInt() {
    try
    {
        int num = ft_atoi(_str.c_str());
        _setprecision = 1;
        itoc(num);
        disInt(num);
        disFloat(num);
        disDouble(num);
    }
    catch(const std::exception& e)
    {
        disImp();
    }
}

void Convert::AcquisitionFloat() {
    try
    {
        _setprecision = 1;
        if (_str.find('.') != std::string::npos)
            _setprecision = _str.size() - _str.find('.') - 2;
        float num = ft_atof(_str.c_str());
        ftoc(num);
        ftoi(num);
        disFloat(num);
        disDouble(num);
    }
    catch(const std::exception& e)
    {
        disImp();
    }
}

void Convert::AcquisitionDouble() {
    try
    {
        if (_str.find('.') != std::string::npos)
            _setprecision = _str.size() - _str.find('.') - 1;
        double num = ft_strtod(_str.c_str());
        dtoc(num);
        dtoi(num);
        dtof(num);
        disDouble(num);
    }
    catch(const std::exception& e)
    {
        disImp();
    }
}

void Convert::initCheck() {
	typeCheck();
        switch (_type) {
    case (CHAR):
        AcquisitionChar();
        break;
    case (INT):
        AcquisitionInt();
        break;
    case (FLOAT):
        AcquisitionFloat();
        break;
    case (DOUBLE):
        AcquisitionDouble();
        break;
    }
}

