#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

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
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret);
		Contact		add(Contact contact);
		int 		is_null();
		void 		print_info(int index);
		void 		display_full();
};

#endif
