#include <stdio.h>
#include <string.h>

void main()
{
  // the start
  printf("-------------------------------------------------------------------\n\n");
  printf("Problem 2\n\n");

  // defining the variables
  int fNum;
  int sNum;
  float answerNum;

  // getting data from user
  printf("please write 2 integer numbers to operate.\n");
  printf("DO NOT write 0 as the 2nd number\n\n");
  printf("the 1st number:\n");
  scanf(" %d", &fNum);
  printf("\nthe 2nd number:\n");
  scanf(" %d", &sNum);

  // process and operate
  answerNum = (float)fNum / (float)sNum;

  // display the result
  printf("\n%d / %d = %.4f", fNum, sNum, answerNum);

  // the end
  printf("\n\n-------------------------------------------------------------------");
}
