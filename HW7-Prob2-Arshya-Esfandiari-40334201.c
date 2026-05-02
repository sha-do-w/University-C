#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void main()
{
  puts("====================================================");

  // define variables
  int numOfRands; // the number of degrees that user wants to be generated
  int temp;       // for holding the value of degree while swapping
  float cosTemp;  // for holding the value of cosx while swapping
  time_t t;

  srand((unsigned)time(&t));

  // get the number of degrees
  puts("How many degrees do you want to make ?");
  scanf(" %d", &numOfRands);

  if (numOfRands <= 0)
  {
    puts("Nice job Einstein...");
    printf("\n====================================================");
    exit(1);
  }

  // define the degrees and their cosine
  int *randDeg = (int *)malloc(numOfRands * sizeof(int));
  float *cosX = (float *)malloc(numOfRands * sizeof(float));

  // generate random degrees and compute their cosine
  for (int i = 0; i < numOfRands; i++)
  {
    randDeg[i] = rand() % 361;
    float randRad = randDeg[i] * (3.14159265 / 180);
    cosX[i] = cos(randRad);
  }

  // bubble sort
  for (int i = 0; i < numOfRands; i++)
  {
    for (int k = i + 1; k < numOfRands; k++)
    {
      if (randDeg[i] < randDeg[k])
      {
        // degree swapping
        temp = randDeg[i];
        randDeg[i] = randDeg[k];
        randDeg[k] = temp;

        // cosine swapping
        cosTemp = cosX[i];
        cosX[i] = cosX[k];
        cosX[k] = cosTemp;
      }
    }
  }

  // display the results
  for (int i = 0; i < numOfRands; i++)
  {
    printf("\nx = %d\t\tcosx = %.2f", randDeg[i], cosX[i]);
  }

  // free heap memory
  free(randDeg);
  free(cosX);

  puts("\n====================================================");
}
