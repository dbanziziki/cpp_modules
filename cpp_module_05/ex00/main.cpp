#include "Bureaucrat.hpp"

int main() {
    Bureaucrat Pit("Pit", 150);
    Bureaucrat Kat("Kat", 1);

    std::cout << Pit << std::endl;
    try {
        Pit.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Kat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        Pit.incrementGrade();
        std::cout << "grade upgraded new grade is " << Pit.getGrade()
                  << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Kat.decrementGrade();
        std::cout << "grade downgraded new grade is " << Kat.getGrade()
                  << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
