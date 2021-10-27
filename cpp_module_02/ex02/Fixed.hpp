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

  bool operator<(Fixed const& rhs);
  bool operator<=(Fixed const& rhs);
  bool operator>(Fixed const& rhs);
  bool operator>=(Fixed const& rhs);
  bool operator==(Fixed const& rhs);
  bool operator!=(Fixed const& rhs);

  Fixed operator+(Fixed const& rhs);
  Fixed operator-(Fixed const& rhs);
  Fixed operator/(Fixed const& rhs);
  Fixed operator*(Fixed const& rhs);

  Fixed& operator++();
  Fixed operator++(int);
  Fixed& operator--();
  Fixed operator--(int);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  static const Fixed& min(Fixed const& a, Fixed const& b);
  static const Fixed& max(Fixed const& a, Fixed const& b);
  static Fixed& min(Fixed& a, Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif /*__FIXED_H__*/