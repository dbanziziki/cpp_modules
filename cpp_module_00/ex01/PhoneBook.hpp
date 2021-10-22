#include "Contact.hpp"
#include <cctype>
#include <iomanip>

class PhoneBook
{
private:
    Contact saved_contacts[8];
    int     _index;

    std::string _get_max_char(std::string str) const;
    void        _display_contacts();
public:
    PhoneBook();
    ~PhoneBook();

    void    add_contact();
    void    search_contact();
};
