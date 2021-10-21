#include <iostream>

void	out_upper(int argc, char const *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
			j++;
		}
		if (i < argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
	(void)argv;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		out_upper(argc, argv);
	return 0;
}
