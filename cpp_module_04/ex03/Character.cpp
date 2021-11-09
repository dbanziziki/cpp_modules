#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++) {
        this->_invatory[i] = NULL;
    }
}

Character::Character(Character const &src) {
    this->_name = src.getName();
    for (int i = 0; i < 4; i++) {
        AMateria const *temp = src.getMateria(i);
        if (temp)
            this->_invatory[i] = temp->clone();
        else
            this->_invatory[i] = NULL;
    }
}

Character::Character(std::string const &name) : _name(name) {
    for (int i = 0; i < 4; i++)
        this->_invatory[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->_invatory[i] != NULL)
            delete this->_invatory[i];
    }
}

AMateria *Character::getMateria(unsigned int idx) const {
    return this->_invatory[idx];
}

Character &Character::operator=(Character const &rhs) {
    if (this != &rhs) {
        this->_name = rhs.getName();
        this->~Character();
        for (int i = 0; i < 4; i++) {
            AMateria const *temp = rhs.getMateria(i);
            if (temp)
                this->_invatory[i] = temp->clone();
            else
                this->_invatory[i] = NULL;
        }
    }
    return *this;
}

std::string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (this->_invatory[i] == NULL) {
            this->_invatory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        return;
    this->_invatory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3)
        return;
    if (this->_invatory[idx] != NULL)
        this->_invatory[idx]->use(target);
}
