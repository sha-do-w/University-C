#include <stdio.h>
#include <string.h>

void main()
{
  // define variables
  int UserPass = 2580;    // user predefined pass
  int EnteredPass = 0;    // to store user's entered pass
  int WrongTime = 0;      // counter of incorrect passes
  int UserChoice = 0;     // user menu selection
  int CardBalance = 1150; // initial balance of card
  int WitAmount = 0;      // to store withdraw amount
  int DepAmount = 0;      // to store deposit amount

  // start of program
  printf("---------------------------------------------------------\n");

  // a loop to validate pass using for loop
  for (WrongTime = 0; WrongTime < 3; WrongTime++)
  {
    printf("Please enter your password.\n");
    scanf("%d", &EnteredPass);
    if (EnteredPass == UserPass)
    { // password is correct
      break;
    }
    else
    { // password is incorrect
      printf("\nError! incorrect Password!\n");
    }
  }

  if (WrongTime < 3)
  { // the pass was correct
    printf("\nPassword Accepted.\n\n");
    printf("Welcome\n");
    do
    {
      // display main menu
      printf("-----------------\n");
      printf("Please choose one of the following options.\n\n");
      printf("1. Check Balance\n");
      printf("2. Deposit Money\n");
      printf("3. Withdraw Money\n");
      printf("4. Exit\n\n");
      scanf("%d", &UserChoice);

      // actions based on user's choice
      if (UserChoice == 1)
      { // to show balance
        printf("\nChecking ...\n");
        printf("Your current balance is %d$.\n\n", CardBalance);
      }
      else if ((UserChoice == 2) || (UserChoice == 3))
      { // to deposit or withdraw money
        // ask user for transaction amount
        printf("How much do you want to %s ? (just the amount)\n", (UserChoice == 2) ? "deposit" : "withdraw");
        scanf("%d", (UserChoice == 2) ? &DepAmount : &WitAmount);

        // confirm transaction
        printf("\nProcessing...\n");
        if (UserChoice == 3)
        { // Withdrawal
          if (WitAmount > CardBalance)
          {
            printf("Transaction failed. Your balance is insufficient.\n\n");
          }
          else
          {
            CardBalance -= WitAmount;
            printf("Transaction successful. Your current balance is %d$.\n", CardBalance);
          }
        }
        else
        { // Deposit
          if (DepAmount < 0)
          {
            printf("Transaction failed. Invalid amount. Please enter a positive number.\n\n");
          }
          else
          {
            CardBalance += DepAmount;
            printf("Transaction successful. Your current balance is %d$.\n", CardBalance);
          }
        }
      }
      else
      { // Invalid menu option
        printf("Invalid option.\n\n");
      }
    } while (UserChoice != 4); // run until user selects "exit"

    // exit message
    printf("\nThank you for choosing our service. Goodbye :)\n");
  }
  else
  { // account locking message after 3 incorrect passes
    printf("\nYou have entered your password incorrectly 3 times.\n");
    printf("Your card has been frozen.\n");
  }
  printf("---------------------------------------------------------");
}