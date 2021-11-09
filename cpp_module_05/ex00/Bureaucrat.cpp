#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : name("Default") {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name) {
    if (grade < 0)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    this->grade = src.getGrade();
    (std::string) this->name = src.getName();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    (std::string) this->name = rhs.getName();
    this->grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const { return this->name; }

void Bureaucrat::incrementGrade() {
    if (this->grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade -= 1;
}

int Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::decrementGrade() {
    if (this->grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade += 1;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}