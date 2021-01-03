#include <iostream>
#include <string>
#include <time.h>
#include "../../Main/drivers.h"
#include "../../Algorithms/algorithms.h"

template <class T, size_t size>
std::string Algo::formatArray(const T (&array)[size]) {
    std::string result = "";
    for (int i = 0; i < size; i++) {
        result += std::to_string(array[i]) + " ";
    }
    return result;
}

template <class T>
int Algo::randRange(T min, T max) { // Excludes maximum value
    return rand() % (max - min) + min;
}

template <class T>
bool Algo::isSorted(T* array, int numElements) { // Alternatively: Use std::is_sorted
    for (int i = 0; i < numElements-1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }

    return true;
}

template <class T>
void Algo::shuffle(T* array, int numElements) { // Alternatively: Use std::shuffle
    for (int i = 0; i <= numElements-2; i++)
    {
        int index = randRange(i, numElements);
        int temp = array[index];
        array[index] = array[i];
        array[i] = temp;
    }
}

template <class T>
int Algo::bogosort(T* array, int numElements) {
    int numShuffleAttempts = 0;
    while (!isSorted(array, numElements)) {
        shuffle(array, numElements);
        numShuffleAttempts++;
    }
    return numShuffleAttempts;
}

int Driver::day1() {
    srand((unsigned int)time(NULL));

    int numbers[] = { 8, 1, 7, 2, 4 };
    int numNumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Original List: " << Algo::formatArray(numbers) << std::endl;

    Algo::bogosort(numbers, numNumbers);
    std::cout << "Sorted List: " << Algo::formatArray(numbers) << std::endl;

    return EXIT_SUCCESS;
}