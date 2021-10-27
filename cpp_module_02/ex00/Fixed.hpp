#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
 private:
  int _n;
  static int const _nbBits = 8;

 public:
  Fixed(void);
  Fixed(Fixed const& src);
  ~Fixed(void);

  Fixed& operator=(Fixed const& rhs);
  int getRawBits(void) const;
  void setRawBits(int const raw);
};

#endif