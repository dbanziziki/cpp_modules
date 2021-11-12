#include "Form.hpp"

Form::Form(std::string const &name, int grade_sign, int grade_exec)
    : _name(name),
      _grade_sign(grade_sign),
      _grade_exec(grade_exec),
      _signed(0) {}

Form::~Form() {}

Form::Form(Form const &src)
    : _name(src.getName()),
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

bool Form::getSigned() const { return this->_signed; }

void Form::beSigned(Bureaucrat const &b) {
    if (b.getGrade() > _grade_sign) {
        throw Form::GradeTooLowException();
    }
    this->_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form const &rhs) {
    os << "< Name: " << rhs.getName() << " sign: " << rhs.getGradeSign()
       << " exec: " << rhs.getGradeExec() << " signed: ";
    if (rhs.getSigned()) {
        std::cout << "true >";
    } else {
        std::cout << "false >";
    }
    return os;
}