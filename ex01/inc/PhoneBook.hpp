#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact	m_contacts[8];
	int		m_contactCount;
public:
	PhoneBook(void);
	void	AddContact(Contact newContact);
	Contact	GetContact(int index);
	int		GetContactCount(void);
};

#endif
