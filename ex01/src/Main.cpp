#include "Main.hpp"

int	main(void)
{
	PhoneBook	phoneook;
	std::string	option;

	do {
		std::cout << HEADER << std::endl;
		std::cout << ADD_MSG << std::endl;
		std::cout << SEARCH_MSG << std::endl;
		std::cout << EXIT_MSG << std::endl;
		std::cout << INPUT_MSG;
		getline(std::cin, option);
		std::cout << std::endl;
		if (option == "ADD")
			std::cout << "IMPLEMENT ADD" << std::endl;
		else if (option == "SEARCH")
			std::cout << "IMPLEMENT SEARCH" << std::endl;
		else
			std::cout << "INVALID OPTION" << std::endl;
	} while (option != "EXIT");
	return (0);
}
