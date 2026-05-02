#include <stdio.h>
#include <string.h>

void main()
{
  // the start
  printf("-------------------------------------------------------------------\n\n");
  printf("Problem 1\n\n");

  // defining the variables
  int userNum;
  int unitDig;
  int tensDig;
  int hundredsDig;
  int thousandsDig;

  // getting data from user
  printf("Please write a 4-digit integer number so i send you its digits.\n");
  scanf(" %d", &userNum);

  // process and operate
  unitDig = userNum % 10;
  tensDig = ((userNum % 100) - (userNum % 10)) / 10;
  hundredsDig = ((userNum % 1000) - (userNum % 100))/100;
  thousandsDig = (userNum - (userNum % 1000))/1000;

  // display the result
  printf("\nunit d:      %d\n", unitDig);
  printf("tens d:      %d\n", tensDig);
  printf("hunderds d:  %d\n", hundredsDig);
  printf("thousands d: %d\n", thousandsDig);

  // the end
  printf("\n-------------------------------------------------------------------\n\n");
}