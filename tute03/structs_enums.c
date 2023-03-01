// This program is a demonstration on structs and enums
// Date: 28/02/2023
// By Natalie Leroy

#include <stdio.h>

#define MONTHS_IN_A_YEAR 12

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
    int opal_card;
};

enum opal_card_type {
    ADULT,
    STUDENT,
    CONCESSION
};

int main(void) {
    struct person jake;
    jake.height = 2.0;
    jake.shoe_size = 3;
    jake.first_name_initial = 'j';
    jake.opal_card = CONCESSION;

    printf("%d", jake.opal_card);


    int no_items_from_bag;


    return 0;
}