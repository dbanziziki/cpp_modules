#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat Pit("Pit", 150);
    Bureaucrat Kat("Kat", 1);
    Form f("form", 10, 1);

    std::cout << Pit << std::endl;
    std::cout << f << std::endl;
    try {
        Pit.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << "You cant go lower: " << e.what() << std::endl;
    }

    try {
        Kat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "You cant go higher: " << e.what() << std::endl;
    }
    Pit.signForm(f);
    Kat.signForm(f);
    return 0;
}
