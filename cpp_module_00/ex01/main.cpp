#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
	std::string	buffer;
	PhoneBook	pb;

	(void)argv;
	(void)argc;
	while (!std::cin.eof())
	{
		std::cout << "Enter a command: ";
		std::cin >> buffer;
		std::transform(buffer.begin(), buffer.end(), buffer.begin(), toupper);
		if (buffer.compare("EXIT") == 0)
			return (0);
		else if (buffer.compare("ADD") == 0)
			pb.add_contact();
		else if (buffer.compare("SEARCH") == 0)
			pb.search_contact();
		else
		{
			std::cout << "Wrong command" << std::endl;
			std::cout << "You can use ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return 0;
}
