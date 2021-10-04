#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook();
		void search(void);
		void add(void);
	protected:
	private:
		contact contacts[8];
		int		lastcontact;
};

#endif
