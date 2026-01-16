#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::set_info(std::string f, std::string l, std::string n, std::string p, std::string s)
{
    this->first_name = f;
    this->last_name = l;
    this->nickname = n;
    this->phone_number = p;
    this->secret = s;
}

int	Contact::is_null()
{
	return (this->first_name.empty());
}

void Contact::print_info(int i)
{
	std::string str;

	if (i == 1)
		str = this->first_name;
	else if (i == 2)
		str = this->last_name;
	else if (i == 3)
		str = this->nickname;
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void Contact::display_full()
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}
