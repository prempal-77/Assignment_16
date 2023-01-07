// Write a program in C to accept a matrix and determine whether it is a sparse matrix

#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() 
{
  int matrix[ROWS][COLUMNS];
  int count = 0;
  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j < COLUMNS; j++) 
    {
      matrix[i][j] = i + j;
    }
  }

  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j < COLUMNS; j++) 
    {
      if (matrix[i][j] != 0) 
      {
        count++;
      }
    }
  }

  if (count < (ROWS * COLUMNS) / 2) 
  {
    printf("The matrix is sparse.\n");
  } 
  else 
  {
    printf("The matrix is not sparse.\n");
  }

  return 0;
}
