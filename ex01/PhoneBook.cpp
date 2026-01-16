#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

PhoneBook::~PhoneBook() {}

static std::string get_user_input(std::string msg)
{
	std::string str;
	while(true)
	{
		std::cout << msg;
		if (!std::getline(std::cin, str))
			exit(0);
		bool has_content = false;
		for (size_t i = 0; i < str.length(); i++)
		{
			if (!isspace(str[i]))
			{
				has_content = true;
				break;
			}
		}
		if (has_content)
			return str;
		std::cout << "Error: Field cannot be empty!" << std::endl;
	}
}

void	PhoneBook::add_contact()
{
	int i = this->index % 8;
	this->contacts[i].set_info(
		get_user_input("First Name: "),
		get_user_input("Last Name: "),
		get_user_input("Nickname: "),
		get_user_input("Phone Number: "),
		get_user_input("Darkest Secret: ")
	);
	this->index++;
	std::cout << "Contact added!" << std::endl;
}

void	PhoneBook::search_pb()
{
	if (this->contacts[0].is_null())
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	int i = 0;
	while (i < 8)
	{
		if (this->contacts[i].is_null())
			break ;
		std::cout << "|" << std::setw(10) << i << "|";	// Index
		this->contacts[i].print_info(1);				// First name
        std::cout << "|";
        this->contacts[i].print_info(2);				// Last Name
        std::cout << "|";
        this->contacts[i].print_info(3);				// Nickname
        std::cout << "|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;
        i++;
	}
	std::string input;
	std::cout << "Select index for full info: ";
	if (!std::getline(std::cin, input))
		exit(0);
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int index_chosen = input[0] - '0';
		if (!this->contacts[index_chosen].is_null())
			this->contacts[index_chosen].display_full();
		else
			std::cout << "Error: slot {" << index_chosen << "} is empty." << std::endl;
	}
	else
		std::cout << "Error: invalid index." << std::endl;
}
