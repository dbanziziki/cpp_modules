#include "Form.hpp"

Form::Form(std::string const &name, int grade_sign, int grade_exec)
    : _name(name),
      _target(""),
      _grade_sign(grade_sign),
      _grade_exec(grade_exec),
      _signed(0) {
    if (_grade_exec < 1 || _grade_sign < 1) Form::GradeTooHighException();
    if (_grade_sign > 150 || _grade_exec > 150) Form::GradeTooLowException();
}

Form::Form(std::string const &target, std::string const &name, int grade_sign,
           int grade_exec)
    : _name(name),
      _target(target),
      _grade_sign(grade_sign),
      _grade_exec(grade_exec),
      _signed(0) {
    if (_grade_exec < 1 || _grade_sign < 1) Form::GradeTooHighException();
    if (_grade_sign > 150 || _grade_exec > 150) Form::GradeTooLowException();
}

Form::~Form() {}

Form::Form(Form const &src)
    : _name(src.getName()),
      _target(src.getTarget()),
      _grade_sign(src.getGradeSign()),
      _grade_exec(src.getGradeExec()) {
    this->_signed = src.getSigned();
}

Form &Form::operator=(Form const &rhs) {
    this->_signed = rhs.getSigned();
    return *this;
}

int Form::getGradeExec() const { return this->_grade_exec; }

int Form::getGradeSign() const { return this->_grade_sign; }

std::string Form::getName() const { return this->_name; }

std::string Form::getTarget() const { return this->_target; }

bool Form::getSigned() const { return this->_signed; }

void Form::beSigned(Bureaucrat const &b) {
    if (b.getGrade() > _grade_sign) {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
}

void Form::execute(Bureaucrat const &executor) const {
    if (!this->getSigned()) {
        throw Form::FormNotSignedException();
    }
    if (this->getGradeExec() < executor.getGrade())
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &rhs) {
    os << "< "
       << "Name: " << rhs.getName() << " sign: " << rhs.getGradeSign()
       << " exec: " << rhs.getGradeExec() << " signed: ";
    if (rhs.getSigned()) {
        os << "true"
           << " >";
    } else {
        os << "false"
           << " >";
    }
    return os;
}