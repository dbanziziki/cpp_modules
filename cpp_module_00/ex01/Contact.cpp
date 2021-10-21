#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				 std::string darkest_secret, int phone_number)
	: first_name(first_name), last_name(last_name),
	  nickname(nickname), darkest_secret(darkest_secret),
	  phone_number(phone_number)
{
}

Contact::Contact()
{
}

Contact::~Contact()
{
}