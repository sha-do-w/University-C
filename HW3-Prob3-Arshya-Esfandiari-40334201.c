#include <stdio.h>
#include <string.h>

void main()
{
  // the start
  printf("-------------------------------------------------------------------\n\n");
  printf("Problem 3\n\n");

  // defining the variables
  float monthlyIncome;
  float initialBalance;

  // getting data from user
  printf("please give us the requirement data.\n\n");
  printf("your initial balance: (in Dollars. e.g.: 1,234.00)\n");
  scanf(" %f", &initialBalance);
  printf("\nyour monthly income. (in Dollars. e.g.: 1,234.00)\n");
  scanf(" %f", &monthlyIncome);

  // process and operate

  // starting
  initialBalance += monthlyIncome;
  // month 1
  initialBalance += ((initialBalance * 0.20) + monthlyIncome);
  // month 2
  initialBalance += ((initialBalance * 0.20) + monthlyIncome);
  // month 3
  initialBalance += ((initialBalance * 0.20) + monthlyIncome);
  // month 4
  initialBalance += ((initialBalance * 0.20) + monthlyIncome);
  // month 5
  initialBalance += ((initialBalance * 0.20) + monthlyIncome);
  // month 6
  initialBalance += (initialBalance * 0.20);

  // display the result
  printf("\nyour balance after 6 months is $%.2f .", initialBalance);
  // the end
  printf("\n\n-------------------------------------------------------------------");
}
