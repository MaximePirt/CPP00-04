//# **************************************************************************** #
//#                                                                              #
//#                                                         :::      ::::::::    #
//#    Makefile                                           :+:      :+:    :+:    #
//#                                                     +:+ +:+         +:+      #
//#    By: mpierrot <mpierrot@student.42.fr>          +#+  +:+       +#+         #
//#                                                 +#+#+#+#+#+   +#+            #
//#    Created: 2023/10/30 12:26:58 by mpierrot          #+#    #+#              #
//#    Updated: 2024/03/30 03:47:59 by mpierrot         ###   ########.fr        #
//#                                                                              #
//# **************************************************************************** #

#include <iostream>

int main (int argc, char **argv)
{
	(void)argc;

	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for(int j = 0; str[j]; j++)
			std::cout << (char)std::toupper(str[j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}