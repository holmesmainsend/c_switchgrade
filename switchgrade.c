#include <stdlib.h>
#include <stdio.h>

int main() {
    char grade = 'A';

    switch(grade) {
        case 'A':
            printf("You aced it!\n");
            break;
        case 'B':
            printf("You did decently!\n");
            break;
        case 'C':
            printf("You did poorly!\n");
            break;
        case 'D':
            printf("You did very poorly!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}