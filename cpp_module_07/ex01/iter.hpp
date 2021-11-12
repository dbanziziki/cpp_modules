#ifndef __ITER_H__
#define __ITER_H__

template <typename T>
void iter(T array[], int size, void (*fn)(T const &p)) {
    for (int i = 0; i < size; ++i) {
        fn(array[i]);
    }
}

#endif