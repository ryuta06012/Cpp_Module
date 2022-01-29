/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:02:21 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/29 19:50:16 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	//std::cout << _rawBits << std::endl;
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = n * (1 << _setBit);
}

Fixed::Fixed(float n)
{
	std::cout << "float constructor called" << std::endl;
	_rawBits = roundf(n * (1 << _setBit));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

int Fixed::toInt(void) const { 
	std::cout << "Int constructor called" << std::endl;
	return (_rawBits / (1 << _setBit));
}

float Fixed::toFloat(void) const {
	std::cout << "toFloat called" << std::endl;
	return (static_cast<float>(_rawBits)) / (1 << _setBit);
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->_rawBits < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->_rawBits > fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->_rawBits <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->_rawBits >= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->_rawBits == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->_rawBits != fixed.getRawBits());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator++(int) {
	Fixed old(this->toFloat());
	++(*this);
	return (old);
}

Fixed Fixed::operator++() {
	//this->_rawBits++;
	this->_rawBits += 1;
	return (*this);
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

