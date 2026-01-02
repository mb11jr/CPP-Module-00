#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->secret = secret;
}

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

int	Contact::is_null()
{
	if(this->first_name.empty())
		return 1;
	return 0;
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
