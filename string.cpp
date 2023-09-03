#include <iostream>

int Strelen (char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}