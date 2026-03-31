#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_contactCount = 0;
}

void	PhoneBook::AddContact(Contact new_contact)
{
	if (m_contactCount < MAX_CONTACTS)
		m_contacts[m_contactCount++] = new_contact;
	else
	{
		for (int i = 1; i < MAX_CONTACTS; i++)
			m_contacts[i - 1] = m_contacts[i];
		m_contacts[MAX_CONTACTS - 1] = new_contact;
	}
}
