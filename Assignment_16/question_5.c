// Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() 
{
  int matrix[ROWS][COLUMNS];
  int sum = 0;

  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j < COLUMNS; j++) 
    {
      matrix[i][j] = i + j;
    }
  }

  
  printf("Matrix:\n");
  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j < COLUMNS; j++) 
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < ROWS; i++) 
  {
    sum += matrix[i][ROWS - i - 1];
  }
  printf("Sum of left diagonals: %d\n", sum);

  return 0;
}
