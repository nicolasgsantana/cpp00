#include "Main.hpp"

static int	add(PhoneBook *book)
{
	Contact		newContact;
	std::string	input;
	int			i;

	i = 0;
	while (i < Contact::SIZE)
	{
		std::cout << "Enter Contact's " << Contact::s_fieldName[i] << ": " << std::flush;
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

static bool is_index_valid(std::string str, int contactCount)
{
	if (str.length() != 1 || !std::isdigit(str[0]))
	{
		std::cout << INDEX_WARNING << std::endl;
		return (false);
	}
	if (std::atoi(str.c_str()) > contactCount || std::atoi(str.c_str()) <= 0)
	{
		std::cout << INDEX_WARNING << std::endl;
		return (false);
	}
	return (true);
}

static std::string	ft_truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

static int	search(PhoneBook *book)
{
	Contact	contact;
	std::string	input;

	if (book->GetContactCount() < 1)
	{
		std::cout << "Phonebook is currently empty." << std::endl << std::endl;
		return (0);
	}
	do
	{
		std::cout << std::right << std::setw(10) << "Index"
			<< "|" << std::setw(10) << "First Name"
			<< "|" << std::setw(10) << "Last Name"
			<< "|" << std::setw(10) << "Nickname" << std::endl;
		for (int i = 0; i < book->GetContactCount(); i++)
		{
			contact = book->GetContact(i);
			std::cout << std::right << std::setw(10) << i + 1
			<< "|" << std::setw(10) << ft_truncate(contact.GetParam(Contact::FIRST_NAME), 10)
			<< "|" << std::setw(10) << ft_truncate(contact.GetParam(Contact::LAST_NAME), 10)
			<< "|" << std::setw(10) << ft_truncate(contact.GetParam(Contact::NICKNAME), 10)
			<< std::endl;
		}
		std::cout << "Enter contact index: ";
		if (!getline(std::cin, input))
			return (1);
	} while (!is_index_valid(input, book->GetContactCount()));
	contact = book->GetContact(std::atoi(input.c_str()) - 1);
	for (int i = 0; i < Contact::SIZE; i++)
		std::cout << Contact::s_fieldName[i] << ": " << contact.GetParam((Contact::e_param)i)
			<< std::endl;
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
		{
			if (search(&phonebook))
				break ;
		}
		else if (option != "EXIT")
			std::cout << "INVALID OPTION" << std::endl;
	} while (option != "EXIT");
	std::cout << std::endl << "Goodbye and thank you for using PHONEBOOK 85!" << std::endl;
	return (0);
}
