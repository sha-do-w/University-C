#include <stdio.h>
#include <string.h>

void main()
{
  // the start
  char Exit = 'r';

  do
  {
    printf("-------------------------------------------------------------------");

    // defining the variables
    int UserNumber;
    int Ctr = 0;

    // getting data from user
    printf("\n\nPlease enter a positive integer to check it and count it down.\n");
    scanf(" %d", &UserNumber);

    // Prevent negative numbers
    while (UserNumber < 0)
    {
      printf("\nError! please write a POSITIVE (+) integer.\n");
      scanf(" %d", &UserNumber);
    }

    // process data, and display the result;
    printf("\n");
    while (Ctr <= UserNumber)
    {
      printf("%d\n", (UserNumber - Ctr));
      ++Ctr;
    }
    printf("\nThe %d is %s.\n\n", UserNumber, (UserNumber % 2 == 0) ? ("Even") : ("Odd"));

    // the end
    printf("Do you want to exit app or restart ?\n\n");
    printf("e = exit\tr = restart\n");
    scanf(" %c", &Exit);
    while ((Exit != 'e') && (Exit != 'r'))
    {
      printf("\nError! Please choose either r or e (small characters)\n");
      scanf(" %c", &Exit);
    }
  } while (Exit != 'e');
  printf("\n");
  printf("-------------------------------------------------------------------\n\n");
}