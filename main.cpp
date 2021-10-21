#include <iostream>

class Test
{
private:
	int age;
public:
	int const man;

	Test(int man);
	Test(void);
	~Test();
	int getAge(void) const;
	void	setAge(int age);
};

namespace foo{
	int x = 17;
	namespace inerfoo {
		int y = 20;
	}
}

void	Test::setAge(int age)
{
	this->age = age;
}

int	Test::getAge() const
{
	return (this->age);
}

Test::Test(int man) : man(man), age(23)
{
}

Test::~Test()
{
}

int main(int argc, char const *argv[])
{
	Test	test(45);

	std::cout << test.getAge() << std::endl;
	test.setAge(45);
	std::cout << test.getAge() << std::endl;
	return 0;
}
