#include "Zombie.hpp"

int main(int argc, char const *argv[]) {
  (void)argc;
  (void)argv;

  Zombie *horde = zombieHorde(19, "Karen");
  delete[] horde;
  return 0;
}
