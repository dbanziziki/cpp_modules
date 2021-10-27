#include "Fixed.hpp"

Fixed::Fixed(int const val) {
  std::cout << "Int constructor called" << std::endl;
  this->_n = val << this->_nbBits;
}

Fixed::Fixed(float const val) {
  std::cout << "Float constructor called" << std::endl;
  this->_n = (int)roundf(val * (1 << this->_nbBits));
}

Fixed::Fixed(void) : _n(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(Fixed const& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_n;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_n = raw;
}

Fixed& Fixed::operator=(Fixed const& rhs) {
  std::cout << "Assignation operator called" << std::endl;
  this->_n = rhs._n;
  return *this;
}

float Fixed::toFloat(void) const {
  return ((float)this->_n / (1 << this->_nbBits));
}

int Fixed::toInt(void) const { return this->_n >> this->_nbBits; }

std::ostream& operator<<(std::ostream& o, Fixed const& rhs) {
  o << rhs.toFloat();
  return o;
}
