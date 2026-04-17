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
			this->firstName = value;
			break;
		case LAST_NAME:
			this->lastName = value;
			break;
		case NICKNAME:
			this->nickname = value;
			break;
		case PHONE:
			this->phoneNumber = value;
			break;
		case SECRET:
			this->darkestSecret = value;
			break;
		default:
			return (1);
	}
	return (0);
}
