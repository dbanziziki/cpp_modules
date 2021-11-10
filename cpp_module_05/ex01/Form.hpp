#ifndef __FORM_H__
#define __FORM_H__

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
   private:
    const std::string _name;
    const int _grade_sign;
    const int _grade_exec;
    bool _signed;

    Form() : _name(""), _grade_sign(19), _grade_exec(19), _signed(0) {}

   public:
    Form(std::string const &name, int grade_sign, int grade_exec);
    Form(Form const &src);
    ~Form();

    std::string getName() const;
    int getGradeSign() const;
    int getGradeExec() const;
    bool getSigned() const;

    void beSigned(Bureaucrat const &b);

    Form &operator=(Form const &rhs);

    class GradeTooHighException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Grade to high"; }
    };

    class GradeTooLowException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Grade to low"; }
    };
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif