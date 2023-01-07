// Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() 
{
  int matrix[ROWS][COLUMNS];
  int max_row = 0;
  int max_count = 0;

  
  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j < COLUMNS; j++) 
    {
      matrix[i][j] = i + j;
    }
  }

  
  for (int i = 0; i < ROWS; i++) 
  {
    int count = 0;
    for (int j = 0; j < COLUMNS; j++) 
    {
      if (matrix[i][j] == 1) 
      {
        count++;
      }
    }
    if (count > max_count) 
    {
      max_count = count;
      max_row = i;
    }
  }

  printf("Row %d has the maximum number of 1s: %d\n", max_row, max_count);

  return 0;
}
