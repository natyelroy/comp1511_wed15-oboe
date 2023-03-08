// This program is a demonstration on functions
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

struct marble {
    int red;
    int green;
    int blue;
};

// This returns the colour of the marble that is most present
char get_main_colour(struct marble c) {
    if (c.red > c.blue && c.red > c.green) {
        return 'r';
    } else if (c.blue > c.red && c.blue > c.green) {
        return 'b';
    }

    return 'g';
}

int total_marbles(struct marble colour) {
    return (colour.red + colour.green + colour.blue);
}

double prob_colour(int colour, struct marble m) {
    int total = total_marbles(m);
    double c = colour * 1.0;

    return c / total;
}

int main(void) {
    struct marble c;
    c.red = 2;
    c.blue = 10;
    c.green = 3;

    char main_colour = get_main_colour(c);
    printf("Main colour is: %c\n", main_colour);

    int total = total_marbles(c);
    printf("Total marbles: %c\n", total);

    double prob = prob_colour(c.red, c);
    printf("Probability of picking red: %lf\n", prob);
}