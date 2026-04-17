#include "Contact.hpp"

const std::string Contact::s_fieldName[Contact::SIZE] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

int	Contact::SetParam(e_param param, std::string value)
{
	if (value.length() <= 0)
		return (1);
	switch (param)
	{
		case FIRST_NAME:
			this->m_firstName = value;
			break;
		case LAST_NAME:
			this->m_lastName = value;
			break;
		case NICKNAME:
			this->m_nickname = value;
			break;
		case PHONE:
			this->m_phoneNumber = value;
			break;
		case SECRET:
			this->m_darkestSecret = value;
			break;
		default:
			return (1);
	}
	return (0);
}
