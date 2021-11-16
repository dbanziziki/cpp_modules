#if !defined(_SCALARCONVERTION_H__)
#define _SCALARCONVERTION_H__

#include <iostream>
#include <stdexcept>

class ScalarConvertion {
   private:
    std::string _value;

    ScalarConvertion() : _value(""){};

   public:
    ScalarConvertion(ScalarConvertion const &src);
    ScalarConvertion(std::string const &value);
    ~ScalarConvertion();

    std::string getValue() const;

    char toChar() const;
    int toInt() const;
    float toFloat() const;
    double toDouble() const;

    ScalarConvertion &operator=(ScalarConvertion const &rhs);

    class ImpossibleConvertionException : public std::exception {
       public:
        virtual const char *what() const throw() { return "impossible"; }
    };

    class NondisplayableException : public std::exception {
       public:
        virtual const char *what() const throw() { return "Non displayable"; }
    };
};

std::ostream &operator<<(std::ostream &o, ScalarConvertion const &rhs);

#endif  // _SCALARCONVERTION_H__
