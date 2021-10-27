#include "Zombie.hpp"

int main(int argc, char const *argv[]) {
  (void)argc;
  (void)argv;

  Zombie charles("Charles");
  Zombie *Lee = newZombie("Lee");

  randomChump("Randomi");
  charles.announce();
  Lee->announce();
  delete Lee;
  return 0;
}
