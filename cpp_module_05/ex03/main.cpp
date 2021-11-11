#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Intern Leo;
    Bureaucrat Pit("Pit", 150);
    Bureaucrat Kat("Kat", 1);
    Form *pres;

    pres = Leo.makeForm("PresidentialPardonForm", "Laurie");

    Kat.signForm(*pres);
    Kat.executeForm(*pres);
    return 0;
}
