#include "span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const &src) {
    this->_vals = src.getVals();
    this->_size = src.getSize();
}

std::vector<int> Span::getVals() const { return this->_vals; }

unsigned int Span::getSize() const { return this->_size; }

Span::~Span() {}

Span &Span::operator=(Span const &rhs) {
    this->_vals = rhs.getVals();
    this->_size = rhs.getSize();
    return *this;
}

void Span::addNumber(int newVal) {
    if (this->_vals.size() >= this->getSize())
        throw Span::OutOfRangeException();
    this->_vals.push_back(newVal);
}

void Span::addNumber(std::vector<int>::iterator const &begin,
                     std::vector<int>::iterator const &end) {
    unsigned int size = std::distance(begin, end);
    if (size > this->getSize()) throw Span::OutOfRangeException();
    this->_vals.insert(this->_vals.end(), begin, end);
}

int Span::shortestSpan() const {
    if (_vals.size() <= 1) throw Span::NoSpanException();
    std::vector<int> temp = this->getVals();
    std::sort(temp.begin(), temp.end());
    return (temp[1] - temp[0]);
}

int Span::longestSpan() const {
    if (_vals.size() <= 1) throw Span::NoSpanException();
    std::vector<int> temp = this->getVals();
    std::sort(temp.begin(), temp.end());
    int min = temp[0];
    std::reverse(temp.begin(), temp.end());
    int max = temp[0];
    return (max - min);
}