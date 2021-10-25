#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string& stringREF = str;
    return 0;
}
