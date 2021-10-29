#include "Karen.hpp"

int getLevel(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return i;
    }
    return (-1);
}

int main(int argc, char const *argv[]) {
    if (argc != 2)
        return (1);
    Karen k;

    enum levels { DEBUG, INFO, WARNING, ERROR };
    switch (getLevel(argv[1])) {
    case DEBUG:
        k.complain("DEBUG");
        break;
    case INFO:
        k.complain("INFO");
        break;
    case WARNING:
        k.complain("WARNING");
        break;
    case ERROR:
        k.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << std::endl;
        break;
    }
    return 0;
}
