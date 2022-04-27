#include <stdio.h>
int main () {
  int n, x, y, i;
  float result = 0;
  printf("Input two integer values:\n");
  scanf("%d %d", &x, &y);
    if (y == 0)
    {

      printf("Division not possible..!\n");
    }
    else
    {
      result = (x*1.0)/(y);
      printf("Result: %.2f\n", result);
    }
}
