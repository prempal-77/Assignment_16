// Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
#define N 3

int main() 
{
  int A[N][N], B[N][N], C[N][N];
  int i, j;

  printf("Enter the elements of matrix A: \n");
  for (i = 0; i < N; i++) 
  {
    for (j = 0; j < N; j++) 
    {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the elements of matrix B: \n");
  for (i = 0; i < N; i++) 
  {
    for (j = 0; j < N; j++) 
    {
      scanf("%d", &B[i][j]);
    }
  }

  for (i = 0; i < N; i++) 
  {
    for (j = 0; j < N; j++) 
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  printf("The sum of the matrices is: \n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) 
    {

      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
