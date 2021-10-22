#include "PhoneBook.hpp"

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook() : _index(0)
{
}

void	PhoneBook::add_contact()
{
	if (_index >= 8)
	{
		std::cout << "The phonebook is full" << std::endl;
		return;
	}
	std::cout << "first name: ";
	std::cin >> saved_contacts[_index].first_name;
	std::cout << "last name: ";
	std::cin >> saved_contacts[_index].last_name;
	std::cout << "nickname: ";
	std::cin >> saved_contacts[_index].nickname;
	std::cout << "phone number: ";
	std::cin >> saved_contacts[_index].phone_number;
	std::cout << "darkest secret: ";
	std::cin >> saved_contacts[_index].darkest_secret;
	_index++;
}

std::string	PhoneBook::_get_max_char(std::string str) const
{
	if (str.length() <= 10)
		return (str);
	str = str.substr(0, 9);	
	str.append(".");
	return (str);
}

void	PhoneBook::_display_contacts()
{
	if (_index == 0)
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < _index; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].first_name);
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].last_name);
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::search_contact()
{
	_display_contacts();
}