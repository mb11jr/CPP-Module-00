#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret ;
	public:
		Contact();
		~Contact();
		void		set_info(std::string f, std::string l, std::string n, std::string p, std::string s);
		int 		is_null();
		void 		print_info(int index);
		void 		display_full();
};

#endif
