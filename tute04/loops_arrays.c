// This program is a demonstration on scanning & arrays
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

#define NUM_DAYS 7

int main(void) {
    // 1. Declare and initialise array of 7
    int array[NUM_DAYS];

    // 2. Read in values
    for (int i = 0; i < NUM_DAYS; i++) {
        scanf("%d", &array[i]);
    }

    // 3. Find max values
    int max = array[0];
    for (int i = 0; i < NUM_DAYS; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // 4. Print max temp
    printf("%d", max);

    return 0;
}