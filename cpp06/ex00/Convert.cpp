/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:27:53 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/19 17:30:57 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(const std::string &str): _str(str) {}

Convert::~Convert() {}

void Convert::typeCheck() {
	 if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
        _type = FLOAT;
        return ;
    }
    if (_str == "-inf" || _str == "+inf" || _str == "nan") {
        _type = DOUBLE;
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

    bool dot = false;
    for (std::size_t i = 0; i < _str.size() - 1; i++) {
        if (_str[i] == '.') {
            dot = true;
            break;
        }
    }
    if (dot == false) {
        _type = INT;
        return;
    }
    _type = DOUBLE;
}

void Convert::AcquisitionChar() {
    return _c = _str[0];
}

void Convert::AcquisitionInt() {
    
}

int ft_stoi(const char *str) {
    double num;

    num = atoi(str);
    std::cout << num std::endl;
    if (num < INT_MIN || num > INT_MAX)
        return std::exception();
    return -1;
}

int ft_stof(const char *str) {
    double num;

    num = atof(str);
}

int ft_stod(const char *str) {
    double num;

    num =
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

