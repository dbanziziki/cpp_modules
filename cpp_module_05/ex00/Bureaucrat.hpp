#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <iostream>
#include <stdexcept>

class Bureaucrat {
   private:
    const std::string name;
    int grade;

   public:
    ~Bureaucrat();
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat const &src);

    Bureaucrat &operator=(Bureaucrat const &rhs);

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
       public:
        virtual const char *what() const throw() { return ("Grade to high"); }
    };

    class GradeTooLowException : public std::exception {
       public:
        virtual const char *what() const throw() { return ("Grade to low"); }
    };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif