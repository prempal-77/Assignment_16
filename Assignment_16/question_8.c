// Write a program in C to print or display an upper triangular matrix.


#include <stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() 
{
  int matrix[ROWS][COLUMNS];

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


  printf("Upper triangular:\n");
  for (int i = 0; i < ROWS; i++) 
  {
    for (int j = 0; j <= i; j++) 
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
