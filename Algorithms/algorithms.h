#ifndef ALGORITHMS_H
#define ALGORITHMS_H

namespace Algo {
    template <class T, size_t size> std::string formatArray(const T(&array)[size]);
    template <class T> bool isSorted(T* array, int numElements); // Alternatively: Use std::is_sorted
    template <class T> void shuffle(T* array, int numElements); // Alternatively: Use std::shuffle
    template <class T> int bogosort(T* array, int numNumbers);
}

#endif