#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    (void)argc;
    std::ifstream   ifs(argv[1]);
    std::string     res((std::istream_iterator<char>(ifs)),
                        std::istream_iterator<char>());

    std::cout << res << std::endl;
    return 0;
}
