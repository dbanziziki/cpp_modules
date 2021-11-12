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
    Bureaucrat Tom("Tom", 19);
    Form *pres;
    Form *shru;
    Form *robo;
    Form *unknown;

    pres = Leo.makeForm("PresidentialPardonForm", "Laurie");
    shru = Leo.makeForm("ShrubberyCreationForm", "Tony");
    robo = Leo.makeForm("RobotomyRequestForm", "Danie");

    try {
        unknown = Leo.makeForm("unknown", "Terry");
    } catch (const Intern::UnknownFormException &e) {
        std::cerr << e.what() << std::endl;
    }

    Kat.signForm(*pres);
    Kat.executeForm(*pres);
    Pit.signForm(*shru);
    Pit.executeForm(*shru);
    Kat.signForm(*shru);
    Kat.executeForm(*shru);
    Tom.signForm(*robo);
    Tom.executeForm(*robo);
    delete pres;
    delete shru;
    delete robo;
    return 0;
}
