#include "utility.h"
#include <stdlib.h>

int Util::randRange(int min, int max) { // Excludes maximum value
    return rand() % (max - min) + min;
}