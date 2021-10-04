#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	lastcontact = 0;
}
void	PhoneBook::add()
{
			lastcontact %= 8;
			contacts[lastcontact].fill();
			lastcontact++;
			return ;
}

void	PhoneBook::search()
{
	int	index;

	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].is_filled())
			contacts[i].formatinfo(i);
	}
	std::cout << "Input index of a contact: ";
	std::cin >> index;
	if (!index || (index < 0 || index > 8) || !(contacts[index - 1].is_filled()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "No contact with that index!" << std::endl;
	}
	else
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		contacts[index - 1].printinfo();
	}
	return ;
}
