#include "Contact.hpp"

class PhoneBook
{
private:
    Contact saved_contacts[8];
    int     size;
public:
    PhoneBook();
    PhoneBook(int size);
    ~PhoneBook();

    void    add_contact();
    void    search_contact();
};
