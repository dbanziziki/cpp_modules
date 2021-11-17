#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    std::srand(time(NULL));
    Bureaucrat Pit("Pit", 150);
    Bureaucrat Kat("Kat", 1);
    PresidentialPardonForm pres("Donie");
    RobotomyRequestForm robo("Patie");
    ShrubberyCreationForm shru("Larie");

    Kat.signForm(pres);
    Kat.executeForm(pres);
    Pit.signForm(pres);
    Pit.executeForm(pres);
    Kat.signForm(robo);
    Kat.executeForm(robo);
    Pit.signForm(robo);
    Pit.executeForm(robo);
    Kat.signForm(shru);
    Kat.executeForm(shru);
    Pit.executeForm(shru);
    return 0;
}
