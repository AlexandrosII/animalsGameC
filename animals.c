#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "animals.h"

const char* animals[] = {
    "cat",
    "dog",
    "elephant",
    "giraffe",
    "lion",
    "tiger",
    "bear"
};

const char* getRandomAnimal() {
    srand(time(NULL));
    int index = rand() % (sizeof(animals) / sizeof(animals[0]));
    return animals[index];
}
