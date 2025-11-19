#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

#define CONTACT_CREATED "Contact created"

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	Secret;

public:
// getter
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getSecret();

// setter
	bool		setFirstName(std::string str);
	bool		setLastName(std::string str);
	bool		setNickname(std::string str);
	bool		setPhoneNum(std::string str);
	bool		setSecret(std::string str);
};

#endif
