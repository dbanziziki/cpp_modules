#ifndef __INTERN_H__
#define __INTERN_H__

#include "Form.hpp"

class Intern {
   private:
    /* data */
   public:
    Intern(/* args */);
    Intern(Intern const &src);
    ~Intern();

    Intern &operator=(Intern const &);

    Form *makeForm(std::string const &type, std::string const &target);

    class UnknownFormException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Unknown form"; }
    };
};

#endif