#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		int			check_pb();
		PhoneBook	del_one(PhoneBook pb);
		void		display(PhoneBook pb);
		PhoneBook 	add_i(PhoneBook pb, int i);
};

#endif
