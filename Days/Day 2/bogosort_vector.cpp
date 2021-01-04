#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "../../Main/drivers.h"

template <class T>
std::string formatVector(std::vector<T> const& vector) {
    std::string result = "";
    for (size_t i = 0; i < vector.size(); ++i) {
        result += std::to_string(vector.at(i)) + " ";
    }
    return result;
}

template <class T>
int randRange(T min, T max) { // Excludes maximum value
    return rand() % (max - min) + min;
}

template <class T>
bool isSorted(std::vector<T> vector) {
    for (size_t i = 0; i < vector.size() - 1; i++) {
        if (vector[i] > vector[i + 1]) {
            return false;
        }
    }

    return true;
}

template <class T>
void shuffle(std::vector<T> &vector) { // &vector passes it by reference
    size_t size = vector.size();
    for (size_t i = 0; i <= size - 2; i++) {
        int index = randRange(i, size);
        int temp = vector[index];
        vector[index] = vector[i];
        vector[i] = temp;
    }
}

template <class T>
int bogosort(std::vector<T> &vector) {
    int numShuffleAttempts = 0;
    while (!isSorted(vector)) {
        shuffle(vector);
        numShuffleAttempts++;
    }
    return numShuffleAttempts;
}

int Driver::day2() {
    srand((unsigned int)time(NULL));

    std::vector<int> numbers = { 4, 1, 2, 5, 3 };
    std::cout << "Original Vector: " << formatVector(numbers) << std::endl;

    bogosort(numbers);
    std::cout << "Sorted Vector: " << formatVector(numbers) << std::endl;

    return EXIT_SUCCESS;
}