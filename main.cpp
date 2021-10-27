#include <iostream>

class Integer {
 private:
  int _n;

 public:
  Integer(int const n);
  ~Integer(void);

  int getValue(void) const;
  Integer& operator=(Integer const& rhs);
  Integer operator+(Integer const& rhs) const;
};
std::ostream& operator<<(std::ostream& o, Integer const& rhs);

std::ostream& operator<<(std::ostream& o, Integer const& rhs) {
  o << rhs.getValue();
  return o;
}

Integer::Integer(int n) : _n(n) {
  std::cout << "constructed " << _n << std::endl;
}

Integer::~Integer(void) {}

int Integer::getValue(void) const { return this->_n; }

Integer& Integer::operator=(Integer const& rhs) {
  std::cout << "Assining " << this->_n << " to " << rhs.getValue() << std::endl;
  this->_n = rhs.getValue();
  return *this;
}

Integer Integer::operator+(Integer const& rhs) const {
  std::cout << "Adding " << this->_n << " to " << rhs.getValue() << std::endl;
  return Integer(this->_n + rhs.getValue());
}

int main(int argc, char const* argv[]) {
  Integer p(7);
  Integer k(8);

  std::cout << k << std::endl;
  k = k + p;
  std::cout << p << std::endl;
  return 0;
}
