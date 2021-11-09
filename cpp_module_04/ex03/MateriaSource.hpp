#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
  private:
    AMateria *_materia[4];

  public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    virtual ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &rhs);

    virtual void learnMateria(AMateria *m);
    virtual AMateria *createMateria(std::string const &type);

    virtual AMateria *getMateria(int idx) const;
};

#endif