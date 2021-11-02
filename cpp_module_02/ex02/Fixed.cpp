#include "Fixed.hpp"

Fixed::Fixed(int const val) { this->_n = val << this->_nbBits; }

Fixed::Fixed(float const val) {
    this->_n = (int)roundf(val * (1 << this->_nbBits));
}

Fixed::Fixed(void) : _n(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &src) {
    *this = src;
    return;
}

int Fixed::getRawBits(void) const { return this->_n; }

void Fixed::setRawBits(int const raw) { this->_n = raw; }

Fixed &Fixed::operator=(Fixed const &rhs) {
    this->_n = rhs._n;
    return *this;
}

float Fixed::toFloat(void) const {
    return ((float)this->_n / (1 << this->_nbBits));
}

int Fixed::toInt(void) const { return this->_n >> this->_nbBits; }

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}

/* comparaison operator overload */
bool Fixed::operator<(Fixed const &rhs) { return this->_n < rhs.getRawBits(); }

bool Fixed::operator<=(Fixed const &rhs) {
    return this->_n <= rhs.getRawBits();
}

bool Fixed::operator>(Fixed const &rhs) { return this->_n > rhs.getRawBits(); }

bool Fixed::operator>=(Fixed const &rhs) {
    return this->_n >= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const &rhs) {
    return this->_n == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) {
    return this->_n != rhs.getRawBits();
}

/* arithmetic operator overload */
Fixed Fixed::operator+(Fixed const &rhs) {
    Fixed res;

    res.setRawBits(this->_n + rhs.getRawBits());
    return res;
}

Fixed Fixed::operator-(Fixed const &rhs) {
    Fixed res;

    res.setRawBits(this->_n - rhs.getRawBits());
    return res;
}

Fixed Fixed::operator*(Fixed const &rhs) {
    Fixed res;

    res.setRawBits(this->_n * rhs.getRawBits() / (1 << this->_nbBits));
    return res;
}

Fixed Fixed::operator/(Fixed const &rhs) {
    Fixed res;

    res.setRawBits(this->_n / rhs.getRawBits() * (1 << this->_nbBits));
    return res;
}

Fixed &Fixed::operator++() {
    this->_n++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++*this;
    return temp;
}

Fixed &Fixed::operator--() {
    this->_n--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --*this;
    return temp;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
    if ((Fixed)a > (Fixed)b)
        return a;
    return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
    if ((Fixed)a < (Fixed)b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}
