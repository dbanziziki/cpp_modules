#include "Intern.hpp"

#include <iostream>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(/* args */) {}

Intern::~Intern() {}

Intern::Intern(Intern const &src) { *this = src; }

Intern &Intern::operator=(Intern const &) { return *this; }

Form *Intern::makeForm(std::string const &type, std::string const &target) {
    std::string formNames[3] = {
        "PresidentialPardonForm",
        "RobotomyRequestForm",
        "ShrubberyCreationForm",
    };

    Form *(*funcs[3])(std::string const &target) = {
        &PresidentialPardonForm::create,
        &RobotomyRequestForm::create,
        &ShrubberyCreationForm::create,
    };
    for (int i = 0; i < 3; ++i) {
        if (type == formNames[i]) {
            return funcs[i](target);
        }
    }
    throw Intern::UnknownFormException();
}
