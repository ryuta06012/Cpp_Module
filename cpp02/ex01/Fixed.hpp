/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:02:28 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/24 14:23:57 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int _rawBits;
	const static int _offset = 8;
public:
	Fixed();
	Fixed(int n);
    Fixed(float n);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat( void ) const;
	int toInt( void ) const;
};


#endif
