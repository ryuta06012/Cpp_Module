/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:25:50 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/29 21:07:28 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class CManiac {
public:
    // 単項 + 演算子を定義する。
    int operator+() {
        return 2;
    }
};

int main() {
    CManiac maniac;          // クラスオブジェクト maniac を作成する。
    int iValue = +maniac;
    printf("iValue = %d\n", iValue);    // 答えは 2 になります。
	int i=0;
	std::cout << ++i << i << i++ << i << std::endl;
	int i1 = i;
	int i2 = i++;
	int i3 = i;
	std::cout << i1 << i2 << i3 << std::endl;
    return 0;
}