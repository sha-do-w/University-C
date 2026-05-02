#include <stdio.h>
#include <stdlib.h>

void main()
{
  puts("====================================================");

  // define variables
  int studentNum; // the number of uesr's students in its class
  char *temp;     // for holding the value of student name while swapping

  // get the number of students
  puts("What is the number of the students of your class?");
  scanf("%d", &studentNum);

  // check the entered number
  if (studentNum <= 0)
  {
    puts("Are you drunk?! Try again with a brain...");
    printf("\n====================================================");
    exit(1);
  }

  // set the blocks as student number
  char *studentName[studentNum];

  // define heap memory
  for (int i = 0; i < studentNum; i++)
  {
    studentName[i] = (char *)malloc(100 * sizeof(char));
  }

  // ask the last names
  puts("\nPlease enter each student's last name.");
  for (int i = 0; i < studentNum; i++)
  {
    printf("the student %d\n", i + 1);
    scanf(" %s", studentName[i]);
  }

  // bubble sort
  for (int i = 0; i < studentNum; i++)
  {
    for (int k = i + 1; k < studentNum; k++)
    {
      int j = 0;
      while (studentName[i][j] != '\0' && studentName[k][j] != '\0' && studentName[k][j] == studentName[i][j])
      {
        j++;
      }
      if (studentName[i][j] > studentName[k][j])
      {
        temp = studentName[i];
        studentName[i] = studentName[k];
        studentName[k] = temp;
      }
    }
  }

  // print last names in order of alphabet
  puts("\nThe students are:");
  for (int i = 0; i < studentNum; i++)
  {
    puts(studentName[i]);
    free(studentName[i]);
  }

  puts("\n====================================================");
}