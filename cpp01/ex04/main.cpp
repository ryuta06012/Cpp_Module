/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 07:32:36 by hryuuta           #+#    #+#             */
/*   Updated: 2021/12/05 04:07:02 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

int main(int ac, char **av) {

	if (ac != 4)
	{
		std::cerr << "usage:" << std::endl;
		std::cerr << "./replace FILENAME STRING REPLACEMENT" << std::endl;
		return (-1);
	}

	std::string	file = av[1];
    std::ifstream inFile(file);
	std::ofstream newFile(file + ".replace");
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
	if (newFile.fail())
	{
		std::cerr << "File Open Error" << std::endl;
        return (-1);
	}
    while (std::getline(inFile, line))
	{
			for (;;)
			{
				pos = line.find(checkStr);
				if (pos == std::string::npos)
					break;
				else
				{
					line.erase(pos, checkStr.length());
					line.insert(pos, replaceStr);
				}
			}
            str += line + "\n";
    }
    newFile << str;
    return (0);
}
