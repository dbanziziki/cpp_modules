#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T const &p, int n) {
    typename T::const_iterator end = p.end();
    typename T::const_iterator it = std::find(p.begin(), end, n);

    return (it == end ? throw(std::out_of_range("Element not in container"))
                      : *it);
}

#endif