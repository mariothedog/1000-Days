#include <iostream>
#include <string>
#include "Utility/util.h"
// #include <stdlib.h>
// #include <time.h>
// #include <random>
// // #include <algorithm>
// #include <chrono>

std::string getNumbersFormatted(int numbers[], int numNumbers) {
    std::string result = "";
    for (int i = 0; i < numNumbers; i++)
    {
        result += std::to_string(numbers[i]) + " ";
    }
    return result;
}

void shuffle(int* first, int* last, int numNumbers) {
    /**
     * Randomly sorts the array using the modern Fisher-Yates shuffle algorithm:
     * https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle#Modern_method
     */

    for (int i = 0; i < numNumbers - 1; i++)
    {
        // int index = rand();
        int index = randRange(2, 5);//randRange(2, 5);
        std::cout << i << index << std::endl;
    }


    //srand(time(NULL)); // Sets seed to current time
}

// template <class T>
// unsigned bogosort(int* first, int* last, T random_engine)
// {
// 	/**
// 	 * Randomly shuffles the array until it is sorted.
// 	 * Returns the number of shuffle attempts taken for the array to be sorted.
// 	 */

// 	//using namespace std;

// 	unsigned numShuffleAttempts = 0;
// 	while (!std::is_sorted(first, last))
// 	{
// 		std::shuffle(first, last, random_engine);

// 		numShuffleAttempts++;
// 	}

// 	return numShuffleAttempts;
// }

int main() {
    int numbers[] = { 2, 1, 8 };
    int numNumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Original List: " << getNumbersFormatted(numbers, numNumbers) << std::endl;

    // unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //std::shuffle(std::begin(numbers), std::end(numbers), std::default_random_engine(seed));
    //shuffle(std::begin(numbers), std::end(numbers), std::default_random_engine(seed));
    shuffle(std::begin(numbers), std::end(numbers), numNumbers);
    std::cout << "Shuffled List: " << getNumbersFormatted(numbers, numNumbers) << std::endl;

    // unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // int numShuffleAttempts = bogosort(std::begin(numbers), std::end(numbers), std::default_random_engine(seed));
    // std::cout << "Sorted List: " << getNumbersFormatted(numbers, numNumbers) << std::endl;
    // std::cout << "Num Shuffle Attempts: " << numShuffleAttempts << std::endl;

    return EXIT_SUCCESS;
}