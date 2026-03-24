/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:30:54 by nde-sant          #+#    #+#             */
/*   Updated: 2026/03/24 18:23:59 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc < 2)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else 
	{
		for (int i = 1; i < argc; i++)
			str.append(argv[i]);
		std::transform (str.begin(), str.end(), str.begin(), ::toupper);
	}
	std::cout << str << std::endl;
	return (0);
}
