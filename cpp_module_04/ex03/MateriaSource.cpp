#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        this->_materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const &src) {
    for (int i = 0; i < 4; i++) {
        AMateria *temp = src.getMateria(i);
        if (temp)
            this->_materia[i] = temp->clone();
        else
            this->_materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            AMateria *temp = rhs.getMateria(i);
            if (temp)
                this->_materia[i] = temp->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (!this->_materia[i]) {
            this->_materia[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return this->_materia[i]->clone();
    }
    return NULL;
}

AMateria *MateriaSource::getMateria(int idx) const {
    return this->_materia[idx];
}
