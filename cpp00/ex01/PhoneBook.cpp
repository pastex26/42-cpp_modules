#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	toReplace = 0;
	contact_size = 0;
	helper(NULL);
}

void	PhoneBook::helper(std::string *invalid)
{
	if (invalid)
	{
		std::cerr << "command not found: " << *invalid << std::endl;
	}
	std::cout << HELPER << std::endl;
}

std::string	PhoneBook::getInput(std::string toGet)
{
	std::string	input;

	while (1)
	{
		if (std::cin.eof())
		{
			break ;
		}
		if (!toGet.empty())
		{
			std::cout << "Enter " << toGet << ": ";
			std::getline(std::cin, input);
			if (input.empty())
			{
				continue ;
			}
			return input;
		}
		else
		{
			std::cout << PROMPT;
			std::getline(std::cin, input);
			if (input == "ADD")
			{
				setContact();
			}
			else if (input == "SEARCH")
			{
				showContact();
			}
			else if (input == "EXIT")
			{
				break ;
			}
			else if (!input.empty())
			{
				helper(&input);
			}
		}
	}
	return ("");
}

void	PhoneBook::setContact()
{
	if (toReplace == CONTACT_SIZE)
	{
		toReplace = 0;
	}
	contacts[toReplace].setFirstName(getInput("First Name"));
	contacts[toReplace].setLastName(getInput("Last Name"));
	contacts[toReplace].setNickname(getInput("Nickname"));
	contacts[toReplace].setPhoneNum(getInput("Phone number"));
	contacts[toReplace].setSecret(getInput("Darkest secret"));
	toReplace++;
	if (contact_size != CONTACT_SIZE)
		contact_size++;
}

static std::string	getTruncatedStr(std::string str)
{
	std::string	truncated;

	if (str.length() > 10)
	{
		truncated = str.substr(0, 9) + ".";
		if (truncated.empty())
		{
			return "Error";
		}
		return truncated;
	}
	return str;
}

static bool	isValidIndex(std::string index, size_t contactSize)
{
	if (index.length() > 1 || !isdigit(index[0]) || (index[0] > '8' || index[0] < '1'))
	{
		return false;
	}
	if ((size_t)(index[0] - 48) > contactSize)
	{
		return false;
	}
	return true;
}

void	PhoneBook::showContact()
{
	if (contact_size == 0)
	{
		std::cout << NO_CONTACT << std::endl; return ;
	}
	for (size_t i = 0; i < contact_size; i++)
	{
		std::cout << std::right;
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << getTruncatedStr(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << getTruncatedStr(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << getTruncatedStr(contacts[i].getNickname()) << "|";
		std::cout << std::setw(10) << getTruncatedStr(contacts[i].getPhoneNumber()) << "|";
		std::cout << std::endl;
	}
	std::string	indexToShow = getInput("Index to show");
	if (isValidIndex(indexToShow, contact_size))
	{
		std::cout << "----------" << std::endl;
		std::cout << std::left;
		std::cout << std::setw(14) << "FirstName" << "| ";
		std::cout << contacts[indexToShow[0] - 49].getFirstName() << std::endl;
		std::cout << std::setw(14) << "LastName" << "| ";
		std::cout << contacts[indexToShow[0] - 49].getLastName() << std::endl;
		std::cout << std::setw(14) << "Nickname" << "| ";
		std::cout << contacts[indexToShow[0] - 49].getNickname() << std::endl;
		std::cout << std::setw(14) << "PhoneNumber" << "| ";
		std::cout << contacts[indexToShow[0] - 49].getPhoneNumber() << std::endl;
		std::cout << std::setw(14) << "DarkestSecret" << "| ";
		std::cout << contacts[indexToShow[0] - 49].getSecret() << std::endl;
		std::cout << std::setw(15) << "----------" << std::endl;
		std::cout << std::right;
	}
	else
	{
		std::cerr << INDEX_ERR << std::endl;
	}
}
