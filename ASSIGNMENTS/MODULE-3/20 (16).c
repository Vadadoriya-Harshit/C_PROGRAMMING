#include <stdio.h>
int main()
{
  int n, c, k;

  
  for (k = 1; k <= 5; k++)
  {
    for (c = 1; c <= 5-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= 5 - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(5-k)-1; c++)
      printf("*");

    printf("\n");
  }

  return 0;
}