#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie some(name);

  some.announce();
}