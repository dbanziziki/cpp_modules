#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < argc)
		{
			std::string str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), toupper);
			std::cout << str;
		}
		std::cout << std::endl;
	}
	return 0;
}
