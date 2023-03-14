// This program is a demonstration on arrays
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>


/* Largest Character (Students)
 1- Create a character array with exactly 8 elements.
 2- Create a character variable called largest_character, equal to the first
 character of the array.
 3- Create a while loop to loop through the character array.
 4- Create an if statement to check if the current character has a
 higher ascii value than "largest_character"
 5- Print out the largest character you've found.
*/
void largest_character() {
    char characters[6];
    for (int j = 0; j < 6; j++) {
        scanf(" %c", &characters[j]);
    }

    char largest_character = characters[0];

    for (int i = 0; i < 6; i++) {
        if (characters[i] > largest_character) {
            largest_character = characters[i];
        }
    }

    printf("%c", largest_character);
}

int main(void) {
    largest_character();
}