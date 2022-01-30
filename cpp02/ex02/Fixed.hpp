/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:02:28 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/29 20:55:11 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <ostream>
#include <iostream>

class Fixed
{
private:
	int _rawBits;
	const static int _setBit = 8;
public:
	Fixed();
	Fixed(int n);
    Fixed(float n);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
	bool operator<(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	Fixed operator*(Fixed const &fixed) const;
	Fixed operator+(Fixed const &fixed) const;
	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	Fixed operator-(Fixed const &fixed) const;
	Fixed operator/(Fixed const &fixed) const;
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
