#include "Contact.hpp"
#include <iostream>

// getter
std::string	Contact::getFirstName()
{
	return firstName;
}

std::string	Contact::getLastName()
{
	return lastName;
}

std::string	Contact::getNickname()
{
	return nickname;
}

std::string	Contact::getPhoneNumber()
{
	return phoneNumber;
}

std::string	Contact::getSecret()
{
	return Secret;
}

// setter
bool	Contact::setFirstName(std::string str)
{
	if (str.empty())
	{
		return false;
	}
	else
	{
		firstName = str;
		return true;
	}
}

bool	Contact::setLastName(std::string str)
{
	if (str.empty())
	{
		return false;
	}
	else
	{
		lastName = str;
		return true;
	}
}

bool	Contact::setNickname(std::string str)
{
	if (str.empty())
	{
		return false;
	}
	else
	{
		nickname = str;
		return true;
	}
}

bool	Contact::setPhoneNum(std::string str)
{
	if (str.empty())
	{
		return false;
	}
	else
	{
		phoneNumber = str;
		return true;
	}
}

bool	Contact::setSecret(std::string str)
{
	if (str.empty())
	{
		return false;
	}
	else
	{
		Secret = str;
		return true;
	}
}
