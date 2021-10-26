#include "Karen.hpp"

int main(int argc, char const *argv[])
{
    if (argc < 2)
        return (1);
    Karen k;

    k.complain(argv[1]);
    return 0;
}
