#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "", 19, 19) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : Form(target, "PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &src)
    : Form(src) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(
    PresidentialPardonForm const &rhs) {
    Form::operator=(rhs);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::action(Bureaucrat const &executor) {
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox."
              << std::endl;
}

Form *PresidentialPardonForm::create(std::string const &target) {
    return new PresidentialPardonForm(target);
}