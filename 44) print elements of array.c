#include <stdio.h>
int main ()
{

  int array_nums[7], i, n;

  printf("Input 7 array elements:\n");
  for (i = 0; i < 7; i++)
  {

    scanf("%d", &n);
    array_nums[i] = n;

  }
  printf("\nArray elements:\n");
  for (i = 0; i < 7; i++)
  {

    if (array_nums[i] <= 0)
    {

      array_nums[i] = 1;

    }
    printf("array_nums[%d] = %d\n", i, array_nums[i]);

  }
}
