#include <iostream>

class Contact
{
private:
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;

    Contact(std::string first_name, std::string last_name, std::string nickname,
        std::string darkest_secret, int phone_number);
    Contact();
    ~Contact();
};
