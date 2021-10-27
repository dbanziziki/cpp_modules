#ifndef __FIXED_H__
#define __FIXED_H__

#include <cmath>
#include <iostream>

class Fixed {
 private:
  int _n;
  static int const _nbBits = 8;

 public:
  Fixed(void);
  Fixed(int const val);
  Fixed(float const val);
  Fixed(Fixed const& src);
  ~Fixed(void);

  Fixed& operator=(Fixed const& rhs);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif /*__FIXED_H__*/