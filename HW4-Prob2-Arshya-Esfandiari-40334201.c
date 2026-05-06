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

    // getting data from user
    printf("\n\nPlease enter an integer to check it.\n");
    scanf(" %d", &UserNumber);
    printf("\n");

    // process data, and display the result;
    if (UserNumber % 10 == 0)
    {
      printf("The %d is Even.\nIts divisible by both 5 and 10.\n\n", UserNumber);
    }
    else if (UserNumber % 5 == 0)
    {
      printf("The %d is Odd.\nIts divisible by 5.\n\n", UserNumber);
    }
    else
    {
      printf("The %d is %s.\nIts divisible by neither 10 nor 5.\n\n", UserNumber, (UserNumber % 2 == 0) ? ("Even") : ("Odd"));
    }
    
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