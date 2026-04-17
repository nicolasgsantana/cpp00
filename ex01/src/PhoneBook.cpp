#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	m_contactCount = 0;
}

void	PhoneBook::AddContact(Contact newContact)
{
	if (m_contactCount < MAX_CONTACTS)
		m_contacts[m_contactCount++] = newContact;
	else
	{
		for (int i = 1; i < MAX_CONTACTS; i++)
			m_contacts[i - 1] = m_contacts[i];
		m_contacts[MAX_CONTACTS - 1] = newContact;
	}
}

Contact	PhoneBook::GetContact(int index)
{
	return (this->m_contacts[index]);
}

int	PhoneBook::GetContactCount(void)
{
	return (this->m_contactCount);
}
