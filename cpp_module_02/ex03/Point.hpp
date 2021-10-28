#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point {
 private:
  Fixed const _x;
  Fixed const _y;

 public:
  Point(Point const& src);
  Point(Fixed const& x, Fixed const& y);
  Point(void);
  ~Point(void);

  Fixed const& getX(void) const;
  Fixed const& getY(void) const;

  Point& operator=(Point const& rhs);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif