#include "Main.hpp"

int	add(PhoneBook *book)
{
	Contact		newContact;
	std::string	input;
	int			i;

	i = 0;
	while (i < Contact::SIZE)
	{
		std::cout << "Enter Contact's " << Contact::s_fieldName[i] << ": ";
		if (!getline(std::cin, input))
			return (1);
		if (newContact.SetParam((Contact::e_param)i, input))
			std::cout << EMPTY_WARNING << std::endl;
		else
			i++;
	}
	book->AddContact(newContact);
	std::cout << "Contact added with success" << std::endl << std::endl;
	return (0);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	option;

	do {
		std::cout << HEADER << std::endl;
		std::cout << ADD_MSG << std::endl;
		std::cout << SEARCH_MSG << std::endl;
		std::cout << EXIT_MSG << std::endl;
		std::cout << INPUT_MSG << std::flush;
		if (!getline(std::cin, option))
			break ;
		std::cout << std::endl;
		if (option == "ADD")
		{
			if (add(&phonebook))
				break ;
		}
		else if (option == "SEARCH")
			std::cout << "IMPLEMENT SEARCH" << std::endl;
		else
			std::cout << "INVALID OPTION" << std::endl;
	} while (option != "EXIT");
	std::cout << std::endl << " Goodbye and thank you for using PHONEBOOK 85!" << std::endl;
	return (0);
}
