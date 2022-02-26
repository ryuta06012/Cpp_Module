/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:28:02 by hryuuta           #+#    #+#             */
/*   Updated: 2022/02/27 03:18:26 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void convert(char *argv[]) {
	Convert convert(argv[1]);
	convert.initCheck();
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "bad arguments" << std::endl;
		return -1;
	}
	convert(argv);
	return 0;
}