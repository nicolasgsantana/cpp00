#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	enum	e_param
	{
		FIRST_NAME = 0,
		LAST_NAME,
		NICKNAME,
		PHONE,
		SECRET,
		SIZE
	};
	static const std::string s_fieldName[SIZE];
	int	SetParam(e_param param, std::string value);
};

#endif
