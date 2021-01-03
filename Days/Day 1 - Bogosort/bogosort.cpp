#include <iostream>
#include <string>
#include "../../Utility/utility.h"
#include <stdlib.h>
#include <time.h>

std::string getNumbersFormatted(int numbers[], int numNumbers) {
    std::string result = "";
    for (int i = 0; i < numNumbers; i++) {
        result += std::to_string(numbers[i]) + " ";
    }
    return result;
}

bool isSorted(int numbers[], int numNumbers) { // Alternatively: Use std::is_sorted
    for (int i = 0; i < numNumbers-1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            return false;
        }
    }

    return true;
}

void shuffle(int numbers[], int numNumbers) { // Alternatively: Use std::shuffle
    for (int i = 0; i <= numNumbers-2; i++)
    {
        int index = Util::randRange(i, numNumbers);
        int temp = numbers[index];
        numbers[index] = numbers[i];
        numbers[i] = temp;
    }
}

int bogosort(int numbers[], int numNumbers) {
    int numShuffleAttempts = 0;
    while (!isSorted(numbers, numNumbers)) {
        shuffle(numbers, numNumbers);
        numShuffleAttempts++;
    }
    return numShuffleAttempts;
}

int main() {
    srand(time(NULL));

    int numbers[] = { 8, 1, 7, 2, 4 };
    int numNumbers = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Original List: " << getNumbersFormatted(numbers, numNumbers) << std::endl;

    bogosort(numbers, numNumbers);
    std::cout << "Sorted List: " << getNumbersFormatted(numbers, numNumbers) << std::endl;

    return EXIT_SUCCESS;
}