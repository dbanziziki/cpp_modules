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
    if (size >= this->getSize()) throw Span::OutOfRangeException();
    this->_vals.insert(this->_vals.end(), begin, end);
}
