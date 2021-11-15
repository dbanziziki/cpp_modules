#if !defined(__SPAN_H__)
#define __SPAN_H__

#include <iostream>
#include <stdexcept>
#include <vector>

class Span {
   private:
    std::vector<int> _vals;
    unsigned int _size;

   public:
    Span();
    Span(Span const &src);
    Span(unsigned int n);
    ~Span();

    void addNumber(int newVal);
    void addNumber(std::vector<int>::iterator const &begin,
                   std::vector<int>::iterator const &end);

    int shortestSpan() const;
    int longestSpan() const;
    unsigned int getSize() const;
    std::vector<int> getVals() const;
    Span &operator=(Span const &rhs);

    class OutOfRangeException : public std::exception {
       public:
        virtual const char *what() const throw() { return "not enough space"; }
    };

    class NoSpanException : public std::exception {
       public:
        virtual const char *what() const throw() {
            return "no enough element in the list";
        }
    };
};

#endif  // __SPAN_H__
