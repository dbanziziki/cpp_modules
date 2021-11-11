#ifndef __FORM_H__
#define __FORM_H__

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
   private:
    const std::string _name;
    const std::string _target;
    const int _grade_sign;
    const int _grade_exec;
    bool _signed;

    Form()
        : _name(""),
          _target(""),
          _grade_sign(19),
          _grade_exec(19),
          _signed(false) {}

   public:
    Form(std::string const &name, int grade_sign, int grade_exec);
    Form(std::string const &target, std::string const &name, int grade_sign,
         int grade_exec);
    Form(Form const &src);
    ~Form();

    std::string getName() const;
    int getGradeSign() const;
    int getGradeExec() const;
    bool getSigned() const;
    std::string getTarget() const;

    void beSigned(Bureaucrat const &b);

    virtual void action(Bureaucrat const &executor) = 0;

    Form &operator=(Form const &rhs);

    class GradeTooHighException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Grade to high"; }
    };

    class FormNotSignedException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Form not signed"; }
    };

    class GradeTooLowException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Grade to low"; }
    };

    void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif