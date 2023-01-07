//write a program in C to find the transpose of a given matrix.
#include <stdio.h>

#define N 3

int main() 
{
  int A[N][N], B[N][N], C[N][N];
  int i, j, k;

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
      C[i][j] = 0;
    }
  }
  for (i = 0; i < N; i++) 
  {
    for (j = 0; j < N; j++) 
    {
      for (k = 0; k < N; k++) 
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("The product of the matrices is: \n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) 
    {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
