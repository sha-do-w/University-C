// Homework
// Arshya Esfandiari
// 40334201
// ------------------------------------------

#include <stdio.h>
#include <string.h>

int main() {
    // Problem 1: Personal Details
    int myAge = 20;
    float myHeight = 1.80;
    char myFirstInitialOfName = 'A';
    char myFullName[] = "Arshya Esfandiari";

    int friendAge = 19;
    float friendHeight = 1.70;
    char friendFirstInitialOfName = 'S';
    char friendFullName[] = "Sobhan Izadi";

    printf("Problem 1\n");
    printf("Personal Detail of Mine\n");
    printf("age : %d\n", myAge);
    printf("height : %.2f\n", myHeight);
    printf("first initial of name : %c\n", myFirstInitialOfName);
    printf("full name : %s\n", myFullName);
    printf("--------------------------------------------\n");
    printf("Personal Detail of a Friend of Mine\n");
    printf("age : %d\n", friendAge);
    printf("height : %.2f\n", friendHeight);
    printf("first initial of name : %c\n", friendFirstInitialOfName);
    printf("full name : %s\n", friendFullName);

    // Problem 2: Favorite Food
    char favFoodOne[] = "pasta";
    char favFoodTwo[] = "cheese";

    printf("\nProblem 2\n");
    printf("Favorite Food\n");
    printf("food 1 : %s\n", favFoodOne);
    printf("food 2 : %s\n", favFoodTwo);

    return 0;
}
