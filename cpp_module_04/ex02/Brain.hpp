#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

class Brain {
  private:
    std::string idea[100];

  public:
    Brain();
    Brain(Brain const &src);
    ~Brain();

    Brain &operator=(Brain const &src);
    std::string getIdea(unsigned int index) const;
};

#endif