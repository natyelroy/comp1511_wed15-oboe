// This program is a demonstration on arrays
// Date: 07/03/2023
// By Natalie Leroy (zXXXXXXX)

#include <stdio.h>

#define SIZE 5
/* Odd Only (Tutor Demo)
 1- Create an integer array with at least 5 elements.
 2- Create a while loop which loops through every element of the array.
 3- Write an if statement which adds 1 to each even value. Do this
 within the while loop.
 4- Write another while loop which goes through the array with a
 different iterator (i.e. if you used i last time, use j)
 5- Print out the values in the array.
*/
void odd_only(void) {
    int array[SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            array[i] = array[i] + 1;
        }
    }

    for (int j = 0; j < SIZE; j++) {
        printf("%d\n", array[j]);
    }
}

/* Copy Array (Students)
 1- Create an array of doubles with 3 elements, each with a non-zero value.
 2- Create another array of doubles with 10 elements where every element initialised to 0.0.
 3- Create a while loop that loops through every element of the first array.
 4- Copy the elements of the first array into the second array (leave 0's at the end)
 5- Create a while loop that prints out all the elements of the second array.
*/
void copy_array() {
    double array1[3] = {1.2, 1.3, 2.4};

    double array2[10] = {0.0};
    array2[0] = 1.2;
}





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

}

int main(void) {
    odd_only();
    copy_array();
    largest_character();
}