#include <stdio.h>
int main ()
{
  int i, n;
  printf("Input a number (integer value):\n");
  scanf("%d", &n);
  printf("\nAll positive divisors of %d \n",n);
  for (i = 1; i <= n; i++)
  {

    if (n % i == 0)
    {

      printf("%d\n", i);

    }
  }
}
