#include "Brain.hpp"

Brain::Brain() {
    std::string someIdeas[] = {"idea", "idea1", "idea2", "idea3"};

    for (int i = 0; i < 100; i++) {
        this->idea[i] =
            someIdeas[rand() % (sizeof(someIdeas) / sizeof(std::string))];
    }
}

Brain::~Brain() {}

Brain::Brain(Brain const &src) {
    for (int i = 0; i < 100; i++) {
        this->idea[i] = src.idea[i];
    }
}

Brain &Brain::operator=(Brain const &rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            this->idea[i] = rhs.idea[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(unsigned int index) const {
    return this->idea[index];
}