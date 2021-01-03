#ifndef ALGORITHMS_H
#define ALGORITHMS_H

namespace Algo {
    template <class T, size_t size> std::string formatArray(const T(&array)[size]);
    template <class T> bool isSorted(T* array, int numElements);
    template <class T> void shuffle(T* array, int numElements);
    template <class T> int bogosort(T* array, int numNumbers);
}

#endif