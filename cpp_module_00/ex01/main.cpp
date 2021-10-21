#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
	std::string	buffer;
	PhoneBook	pb;

	std::cout << "Enter a word: ";
	std::cin >> buffer;
	std::cout << buffer << std::endl;
	if (buffer.compare("EXIT") == 0)
	{
		std::cout << "About to exit the program" << std::endl;
		return (1);
	}
	return 0;
}
