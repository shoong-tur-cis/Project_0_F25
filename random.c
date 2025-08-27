#include <stdlib.h>
#include <stdio.h>

void rand_string(char* str, size_t size) {
    for (int i = 0; i < size; i++) {
        str[i] = 97 + (rand() % 26);
    }

    str[size] = 0;
}