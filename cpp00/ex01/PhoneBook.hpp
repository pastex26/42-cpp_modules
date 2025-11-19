#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

#define HELPER "ADD: add a contact\nSEARCH: show requested contact\nEXIT: exit program"
#define NO_CONTACT "No contact found, enter ADD to add one"
#define INDEX_ERR "Index is not valid"
#define PROMPT "> "
#define CONTACT_SIZE 8

class PhoneBook
{
private:
	Contact		contacts[CONTACT_SIZE];
	size_t		contact_size;
	int			toReplace;

public:
// constructor
	PhoneBook(void);

	std::string	getInput(const std::string toGet);
	void		setContact();
	void		showContact();
	void		helper(std::string *invalid);
};

#endif
