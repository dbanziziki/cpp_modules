
#ifndef __IAMATERIASOURCE_H__
#define __IAMATERIASOURCE_H__

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource {
  public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif