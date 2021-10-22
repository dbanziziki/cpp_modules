#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getDarkestSecret( void )
{
	return _darkest_secret;
}

std::string Contact::getFirstName( void )
{
	return _first_name;
}

std::string Contact::getLastName( void )
{
	return _last_name;
}

std::string Contact::getNickname( void )
{
	return _nickname;
}

std::string Contact::getPhoneNumber( void )
{
	return _phone_number;
}

void    Contact::setDarkestSecret( std::string secret )
{
	if (secret.empty())
		return ;
	_darkest_secret = secret;
}

void    Contact::setFirstName( std::string firstName )
{
	if (firstName.empty())
		return ;
	_first_name = firstName;
}

void    Contact::setLastName( std::string lastName )
{
	if (lastName.empty())
		return ;
	_last_name = lastName;
}

void	Contact::setNickname( std::string nickName )
{
	if (nickName.empty())
		return ;
	_nickname = nickName;
}

void	Contact::setPhoneNumber( std::string phoneNumber )
{
	if (phoneNumber.empty())
		return ;
	_phone_number = phoneNumber;
}