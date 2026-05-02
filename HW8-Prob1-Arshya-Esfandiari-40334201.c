#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypes of functions
void bubbleSort(int noNum, float arrayNum[]);
float calMean(int noNum, float arrayNum[]);
float calMedian(int noNum, float arrayNum[]);
float calMode(int noNum, float arrayNum[], int *pFreq);

void main()
{
  // Print header
  puts("\n####################################################");

  // Define variables
  int numOfIndexes;
  float mMean, mMedian, mMode;
  int mModeFreq;
  int *pmModeFreq = &mModeFreq;

  // Ask for the number of indexes
  puts("How many is the data of your set?");
  scanf(" %d", &numOfIndexes);

  // Verify the number
  if (numOfIndexes <= 0)
  {
    puts("What is your IQ level?");
    exit(1);
  }

  // Define the array
  float set[numOfIndexes];

  // Taking the data of array
  puts("\nPlease enter the values of your set.");
  for (int i = 0; i < numOfIndexes; i++)
  {
    printf("The value %d:\n", i + 1);
    scanf(" %f", &set[i]);
  }

  // Calling the functions
  mMean = calMean(numOfIndexes, set);
  mMedian = calMedian(numOfIndexes, set);
  mMode = calMode(numOfIndexes, set, pmModeFreq);

  // Display the result
  puts("\nResult");
  puts("----------------");
  printf("Number of data in the set: %d\n", numOfIndexes);
  printf("Mean: %.2f\n", mMean);
  printf("Median: %.2f\n", mMedian);
  if (mMode - (int)mMode == 0) 
  {
    printf("Mode: %d\n", (int)mMode);
  }
  else
  {
    printf("Mode: %.2f\n", mMode);
  }
  printf("Frequency of mode: %d\n", mModeFreq);

  // Print footer
  puts("####################################################\n");
}

// Function to sort the array using bubble sort
void bubbleSort(int noNum, float arrayNum[])
{
  for (int i = 0; i < noNum; i++)
  {
    float container;
    for (int k = i + 1; k < noNum; k++)
    {
      if (arrayNum[i] > arrayNum[k])
      {
        container = arrayNum[i];
        arrayNum[i] = arrayNum[k];
        arrayNum[k] = container;
      }
    }
  }
}

// Function to calculate the mean
float calMean(int noNum, float arrayNum[])
{
  bubbleSort(noNum, arrayNum);
  float mean;
  for (int i = 0; i < noNum; i++)
  {
    mean += arrayNum[i];
  }
  return mean / noNum;
}

// Function to calculate the median
float calMedian(int noNum, float arrayNum[])
{
  bubbleSort(noNum, arrayNum);
  if (noNum % 2 == 0)
  {
    int leftMid = (noNum / 2) - 1;
    int rightMid = noNum / 2;
    return (arrayNum[leftMid] + arrayNum[rightMid]) / 2;
  }
  else
  {
    return arrayNum[noNum / 2];
  }
}

// Function to calculate the mode
float calMode(int noNum, float arrayNum[], int *pFreq)
{
  bubbleSort(noNum, arrayNum);
  int subCnt = 1;
  int cnt = 0;
  float subNum = arrayNum[0];
  float num = 0;
  for (int i = 1; i < noNum; i++)
  {
    if (arrayNum[i] == subNum)
    {
      subCnt++;
    }
    else
    {
      if (cnt < subCnt)
      {
        cnt = subCnt;
        num = subNum;
      }
      subCnt = 1;
      subNum = arrayNum[i];
    }
  }
  if (cnt < subCnt)
  {
    cnt = subCnt;
    num = subNum;
  }
  *pFreq = cnt;
  return num;
}