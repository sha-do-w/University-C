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
    int UserScore;

    // getting data from user
    // lets set Math as the lesson
    printf("\n\nPlease enter your score in the Math lesson from 0 to 100.\n");
    scanf(" %d", &UserScore);

    // Prevent Invalid numbers

    while ((UserScore > 100) || (UserScore < 0))
    {
      printf("\n");
      printf("ERROR!!!\n");
      printf("Invalid score, Please enter a score BETWEEN 0 and 100!\n");
      scanf(" %d", &UserScore);
    }
    printf("\n");

    // process data, and display the result
    if (UserScore >= 90)
    {
      printf("Congrat book wormer! Your grade is A!");
    }
    else if ((UserScore >= 80) && (UserScore < 90))
    {
      printf("Well done, Bright Spark! Your grade is B!");
    }
    else if ((UserScore >= 70) && (UserScore < 80))
    {
      printf("Nice try, keep pushing! Your grade is C!");
    }
    else if ((UserScore >= 60) && (UserScore < 70))
    {
      printf("Keep at it, you\'ve got potential! Your grade is D!");
    }
    else if ((UserScore >= 50) && (UserScore < 60))
    {
      printf("Better than fail! Your grade is E!");
    }
    else
    {
      printf("Learning from mistakes is key! Your grade is F!");
    }

    // the end
    printf("\n\nDo you want to exit app or restart ?\n\n");
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