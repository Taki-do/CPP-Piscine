/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:20:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/05/22 13:22:09 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char *av[]) {
	if (ac == 4)
	{
		size_t 		pos;
		std::string line;
		std::string filename;
		std::string s1 = std::string(av[2]);
		std::string s2 = std::string(av[3]);
		
		std::ifstream file(av[1]);
		if (!file)
		{
			std::cerr << "Error while opening file" << std::endl;
			return (1);
		}
		filename = std::string(av[1]) + ".replace";
		std::ofstream w_file(filename.c_str());
		if (!w_file)
		{
			std::cerr << "Can't create file" << std::endl;
			return (1);
		}
		while (std::getline(file, line))
		{
			pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				w_file << line.substr(0, pos);
				w_file << s2;
				line = line.substr(pos + s1.length());
				pos += s2.length();
			}
			w_file << line << std::endl;
		}
		file.close();
		w_file.close();
	}
}