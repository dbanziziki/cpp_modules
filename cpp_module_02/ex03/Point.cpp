#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(Fixed const& x, Fixed const& y) : _x(x), _y(y) {}

Point::~Point() {}

Fixed const& Point::getX(void) const { return this->_x; }

Fixed const& Point::getY(void) const { return this->_y; }

Point& Point::operator=(Point const& rhs) {
  (Fixed) this->_x = rhs.getX();
  (Fixed) this->_y = rhs.getY();
  return *this;
}
