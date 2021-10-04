#include <iostream>
#include "PhoneBook.hpp"

int	error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	cmds(void)
{
	PhoneBook	phonebook;
	std::string cmd;
	int			end;

	end = 1;
	while (end)
	{
		std::cout << "Input commands ADD, SEARCH or EXIT: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			end = 0;
		else
			error("ADD\", \"SEARCH\" or \"EXIT\" are valid commands!");
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (error("Arguments are required!"));
	else if(argv[1] != NULL)
		return (error("Arguments are required!"));
	cmds();
}
