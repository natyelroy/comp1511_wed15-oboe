// This program is a demonstration on functions
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

struct marble {
    int red;
    int green;
    int blue;
};

// This is returning the most prominent colour of marble
char get_main_colour(struct marble c) {
    if (c.red > c.blue && c.red > c.green) {
        return 'r';
    } else if (c.blue > c.green && c.blue > c.red) {
        return 'b';
    }

    return 'g';
}

int total_marbles(struct marble c) {
    return c.red + c.blue + c.green;
}

double prob_colour(int colour, struct marble m) {
    int total = total_marbles(m);
    double prob_c = colour * 1.0;

    return prob_c / total;
}


int main(void) {
    struct marble c;
    c.red = 2;
    c.blue = 10;
    c.green = 3;

    char main_colour = get_main_colour(c);
    printf("Main colour is: %c\n", main_colour);

    int total = total_marbles(c);
    printf("Total marbles: %d\n", total);

    double prob = prob_colour(c.red, c);
    printf("Probability of picking red: %lf\n", prob);

    return 0;
}
