#ifndef __PRESIDENTPARDONFORM_H__
#define __PRESIDENTPARDONFORM_H__

#include "Form.hpp"

class PresidentialPardonForm : public Form {
   private:
   public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
    void action(Bureaucrat const &executor);

    static Form *create(std::string const &target);
};

#endif