#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", "", 19, 19) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : Form(target, "RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
    : Form(src) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(
    RobotomyRequestForm const &rhs) {
    Form::operator=(rhs);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::action(Bureaucrat const &executor) {
    Form::execute(executor);
    if (std::rand() % 2 == 0) {
        std::cout << this->getTarget() << " has been robotized" << std::endl;
    } else {
        std::cout << this->getTarget() << " is still human" << std::endl;
    }
}

Form *RobotomyRequestForm::create(std::string const &target) {
    return new RobotomyRequestForm(target);
}