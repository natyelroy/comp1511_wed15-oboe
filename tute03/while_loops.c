// This program is a demonstration on while loops
// Date: 28/02/2023
// By Natalie Leroy

#include <stdio.h>

int main(void) {
    // // A
    // int i = 5;
    // while (i > 0) {
    //     printf("%d\n", i);
    //     i--;
    // }

    // // // B
    // int i = 1;
    // while (i < 32) {
    //     printf("%d\n", i);
    //     i = i + i;
    // }

    // // C
    // int i = 0;
    // while (i < 32) {
    //     printf("%d\n", i);
    //     i = i + 2;
    // }

    // // D
    // int i = 5;
    // while (i >= 0) {
    //     printf("%d\n", i);
    //     i--;
    // }

    // // E
    // int i = 0;
    // int keep_going = 1;
    // while (keep_going == 1) {
    //     if (i > 3) {
    //         keep_going = 0;
    //     }
    //     i++;
    // }
    // printf("%d\n", i);

    // // F
    // int i;
    // while (i > 0) {
    //     printf("%d\n", i);
    //     i--;
    // }

    // // G
    // int i = 0;
    // int max = 32;
    // while (i < max) {
    //     printf("%d\n", i);
    //     max = max + 2;
    // }

    // H
    int i = 0;
    int keep_going = 0;
    while (keep_going == 1) {
        if (i > 3) {
            keep_going = 0;
        }
        i++;
    }
    printf("%d\n", i);

    return 0;
}