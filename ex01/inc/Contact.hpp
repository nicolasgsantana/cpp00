#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickname;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;
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
