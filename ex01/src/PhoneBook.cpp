#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

int PhoneBook::check_pb()
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (this->contacts[i].is_null())
			break;
		i++;
	}
	return i;
}


