#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
   private:
    T *_tab;
    unsigned int _size;

   public:
    Array() : _size(0) { _tab = new T[0]; };

    Array(unsigned int n) : _size(n) { _tab = new T[n]; }

    Array(Array const &src) {
        T *tab_ref = src.getTab();
        _tab = new T[src.size()];
        for (unsigned int i = 0; i < _size; i++) {
            _tab[i] = tab_ref[i];
        }
    }

    ~Array() { delete[] _tab; };

    T *getTab() const { return _tab; }
    unsigned int size() const { return _size; }

    Array<T> &operator=(Array const &rhs) {
        if (this != &rhs) {
            this->~Array();
            _size = rhs.size();
            _tab = new T[rhs.size()];
            for (int i = 0; i < rhs.size(); i++) {
                _tab[i] = rhs[i];
            }
        }
        return *this;
    }

    T &operator[](unsigned int index) {
        if (index >= _size) {
            throw Array::OutOfRangeException();
        }
        return _tab[index];
    }

    class OutOfRangeException : public std::exception {
       public:
        virtual const char *what() const throw() {
            return "index out of range";
        }
    };
};

#endif