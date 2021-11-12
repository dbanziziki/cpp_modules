#ifndef __WHATEVER_H__
#define __WHATEVER_H__

template <typename T>
void swap(T &a, T &b) {
    T c = a;

    a = b;
    b = c;
}

template <typename T>
T const min(T const &x, T const &y) {
    return (x >= y ? y : x);
}

template <typename T>
T const max(T const &x, T const &y) {
    return (x >= y ? x : y);
}
#endif