#include "PhoneBook.hpp"

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook() : _index(0)
{
}

void	PhoneBook::add_contact()
{
	std::string	buffer;

	if (_index >= 8)
	{
		std::cout << "The phonebook is full" << std::endl;
		return;
	}
	std::cout << "first name: ";
	std::cin >> buffer;
	saved_contacts[_index].setFirstName(buffer);
	std::cout << "last name: ";
	std::cin >> buffer; 
	saved_contacts[_index].setLastName(buffer);
	std::cout << "nickname: ";
	std::cin >> buffer;
	saved_contacts[_index].setNickname(buffer);
	std::cout << "phone number: ";
	std::cin >> buffer;
	saved_contacts[_index].setPhoneNumber(buffer);
	std::cout << "darkest secret: ";
	std::cin >> buffer;
	saved_contacts[_index].setDarkestSecret(buffer);
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
		return ;
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < _index; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << _get_max_char(saved_contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::search_contact()
{
	int	i;
	std::string	buffer;

	_display_contacts();
	std::cout << "Enter the index of a contact: ";
	std::cin >> buffer;
	i = std::stoi(buffer);
	if (i >= _index)
	{
		std::cout << "That contact doesnt exist" << std::endl;
		return ;
	}
	std::cout << saved_contacts[i].getFirstName() << std::endl;
	std::cout << saved_contacts[i].getLastName() << std::endl;
	std::cout << saved_contacts[i].getNickname() << std::endl;
	std::cout << saved_contacts[i].getDarkestSecret() << std::endl;
	std::cout << saved_contacts[i].getPhoneNumber() << std::endl;
}