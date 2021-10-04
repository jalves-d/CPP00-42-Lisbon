#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class contact
{
	public:
		contact();
		bool	is_filled(void);
		void	printinfo(void);
		void	formatinfo(int i);
		void	fill(void);
	protected:
	private:
		void	formatfield(std::string str);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		filled;
};

#endif
