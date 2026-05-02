#include <stdio.h>

void main()
{
  // Define Variables
  int customerID[25] = {3433, 4165, 8431, 6270, 5987, 5398, 7010, 1860, 4178, 8428, 4159, 9575, 8411, 6930, 5011, 1119, 5722, 2799, 7963, 3785, 2667, 9313, 3198, 4001, 4444}; // Array of customer IDs
  float customerDebt[25] = {25.40, 54.24, 168.32, 1.21, 0.05, 97.55, 45, 50, 143.38, 175.48, 35.98, 19.75, 65.00, 1.42, 7.05, 158.28, 77.87, 41.41, 99.50, 33.92, 82.24, 183.67, 51.25, 11.25, 25.64}; // Array of customer debts
  int thisCustID = 0, // Variable to store user inputted customer ID
      i = 0, // Loop counter
      k = 0, // Loop counter
      isCorrect = 0, // Flag to check if customer ID is found
      isWrong = 0; // Flag to check if entered ID is incorrect

  // Sort Data (Bubble Sort)
  for (i = 0; i < 25; i++) 
  {
    for (k = i + 1; k < 25; k++) 
    {
      if (customerID[i] > customerID[k]) 
      {
        // Swap IDs
        int container1 = customerID[k];
        customerID[k] = customerID[i];
        customerID[i] = container1;

        // Swap Debts
        float container2 = customerDebt[k];
        customerDebt[k] = customerDebt[i];
        customerDebt[i] = container2;
      }
    }
  }

  // Display Welcome Message
  puts("\n\nWelcome to the Arshya Market");
  puts("----------------------------------");

  do 
  {
    // Prompt for Customer ID
    printf("Please %senter your customer id :\n", (isWrong == 1) ? "re" : ""); 
    scanf(" %d", &thisCustID);
    puts("");

    // Check ID in Database
    for (i = 0; i < 25; i++) 
    {
      if (thisCustID == customerID[i]) 
      {
        if (customerDebt[i] > 100.00) 
        {
          // If debt > $100
          isCorrect = 1;
          puts("Sorry :|");
          printf("You don't have enough credit. Your debt is %.2f$.\n\n", customerDebt[i]);
          puts("Please pay your debt before we call 911 ...");
          break;
        } 
        else 
        {
          // If debt <= $100
          isCorrect = 1;
          puts("Horray :D");
          printf("You still have %.2f$ credit. Your debt is %.2f$.\n\n", (100.00 - customerDebt[i]), customerDebt[i]);
          puts("We would be happy if you reset your credit by paying the debt :)");
          break;
        }
      } 
      else if (thisCustID < customerID[i]) 
      {
        // Early termination if ID not found
        isWrong = 1;
        puts("Error 404");
        puts("The ID not found\n");
        break;
      }
    }
  } while (!isCorrect); // Continue until correct ID is found
  puts("----------------------------------");
}