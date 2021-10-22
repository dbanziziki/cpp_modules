#include <iostream>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string _phone_number;
public:
	Contact();
	~Contact();

	/*getters*/
	std::string getFirstName( void );
	std::string getLastName( void );
	std::string getNickname( void );
	std::string getDarkestSecret( void );
	std::string getPhoneNumber( void );

	/*setters*/
	void    setFirstName( std::string firstName );
	void    setLastName( std::string lastName );
	void    setNickname( std::string nickname );
	void    setDarkestSecret( std::string secret);
	void    setPhoneNumber( std::string phoneNumber );
};
