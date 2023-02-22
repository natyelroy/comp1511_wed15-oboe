// This program will compare two integers.
// Date: 22/02/2023
// By Natalie Leroy
/*
    - Scan in two integers (a and b).
    - If the first integer is less than the second,
    print out a short error message using a procedure.
    - If the second integer is 0, print out a
    different short error message.
    - If the first integer is larger than the second,
    prints a / b and (a * 1.0) / (b * 1.0).
*/

#include <stdio.h>

void error_a_less_than_b();
void error_b_is_zero();

int main (void) {
    // Let's scan in values!
    int a;
    int b;
    scanf("%d %d", &a, &b);

    // Let's compare!
    if (a < b) {
        error_a_less_than_b();
    }

    if (b == 0) {
        error_b_is_zero();
    }

    if (a > b) {
        printf("%d\n", a / b);
        printf("%lf\n", (a * 1.0) / (b * 1.0));
    }

    return 0;
}

void error_a_less_than_b() {
    printf("Error! a is less than b.\n");
}

void error_b_is_zero() {
    printf("Error! b is 0.\n");
}