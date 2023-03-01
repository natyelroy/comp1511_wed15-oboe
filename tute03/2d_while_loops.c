// This program is a demonstration on 2D while loops
// Date: 28/02/2023
// By Natalie Leroy

#include <stdio.h>

#define SIZE 4

int main(void) {
    // // 1
    // int row = 0;
    // while (row < SIZE) {
    //     int col = 0;
    //     while (col < SIZE) {
    //         if (row == col) {
    //             printf("O");
    //         } else {
    //             printf("X");

    //         }
    //         col++;
    //     }
    //     row++;
    //     printf("\n");
    // }

    // // 2
    // int row = 0;
    // while (row < SIZE) {
    //     int col = 0;
    //     while (col < SIZE) {
    //         if (col % 2 == 0) {
    //             printf("O");
    //         } else {
    //             printf("X");

    //         }
    //         col++;
    //     }
    //     row++;
    //     printf("\n");
    // }

    // // 3
    // int row = 0;
    // while (row < SIZE) {
    //     int col = 0;
    //     while (col < SIZE) {
    //         if (col != 1 && row != 1) {
    //             printf("O");
    //         } else {
    //             printf("X");

    //         }
    //         col++;
    //     }
    //     row++;
    //     printf("\n");
    // }

    // 4
    int row = 0;
    while (row < SIZE) {
        printf("X");
        int col = 1;
        while (col < 3) {
            if (row == 0 || row == 3) {
                printf("X");
            } else {
                printf("O");
            }
            col++;
        }
        printf("X");
        row++;
        printf("\n");
    }

    return 0;
}