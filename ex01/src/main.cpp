#include "PhoneBook.hpp"

int main()
{
	PhoneBook	pb;
	std::string	command;

	std::cout << "--- Welcome to your Awesome PhoneBook ---" << std::endl;
	while(true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
			pb.add_contact();
		else if (command == "SEARCH")
			pb.search_pb();
		else if (command == "EXIT")
		{
			std::cout << "Exiting PhoneBook. Data will be lost." << std::endl;
            break;
		}
		else if (!command.empty())
			std::cout << "Invalid command! Please use ADD, SEARCH, or EXIT." << std::endl;
	}
	return 0;
}
