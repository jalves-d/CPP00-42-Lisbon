#include "contact.hpp"

contact::contact()
{
	filled = false;
}

void	contact::printinfo(void)
{
	std::cout << "First name     :" << first_name << std::endl;
	std::cout << "Last name      :" << last_name << std::endl;
	std::cout << "Nickname       :" << nickname << std::endl;
	std::cout << "Phone number   :" << phone_number << std::endl;
	std::cout << "Darkest secret :" << darkest_secret << std::endl;
}

void	contact::fill(void)
{
	std::cout << "Input contact's first name:" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Input contact's last name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Input contact's nickname:" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Input contact's phone number:" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Input contact's darkest secret:" << std::endl;
	std::getline(std::cin, darkest_secret);
	filled = true;
	return ;
}

bool	contact::is_filled(void)
{
	return (filled);
}

void	contact::formatfield(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
	return ;
}

void	contact::formatinfo(int i)
{
	std::cout << "         " << i + 1 << "|";
	formatfield(first_name);
	formatfield(last_name);
	formatfield(nickname);
	std::cout << std::endl;
	return ;
}
