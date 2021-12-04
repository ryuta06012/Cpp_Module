/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 07:32:36 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/04 16:02:46 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

int main(int ac, char **av) {

    // pemファイル読み込み
	if (ac < 2)
	{
		std::cout << "aaaa" << std::endl;
		std::cout << "usage:" << std::endl;
		std::cout << "./replace FILENAME STRING REPLACEMENT" << std::endl;
		return (-1);
	}
	std::string	file = av[1];
    std::ifstream inFile(file);
	std::ofstream outFile(file + ".replace");
	std::string	checkStr(av[2]);
	std::string	replaceStr(av[3]);
    std::string str;
   	std::string line;
	size_t		pos;

    if (inFile.fail())
	{
        std::cerr << "File Open Error" << std::endl;
        return (-1);
    }
    while (getline(inFile, line))
	{
			std::cout << "line" << std::endl;
           	std::cout << line  << std::endl;
			for (int i=0; i<5; i++)
			{
				pos = line.find(checkStr);
				std::cout << pos << std::endl;
				if (pos == std::string::npos)
					break;
				else
				{
					line.insert(pos, replaceStr);
				}
			}
            str += line + "\n";
    }
    std::cout << str << std::endl;

    return 0;
}
