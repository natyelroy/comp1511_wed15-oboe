// This program is a demonstration on scanning in loops
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

int main(void) {

    // How can we make a continuous loop?
    int variable;
    while (scanf("%d", &variable) == 1) {
        printf("Read: %d\n", variable);

    }


    return 0;
}