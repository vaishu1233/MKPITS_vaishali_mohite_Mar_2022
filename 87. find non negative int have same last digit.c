#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d",test(123, 456));
    printf("\n%d",test(12, 512));
    printf("\n%d",test(7, 87));
    printf("\n%d",test(12, 45));

    }
  int test(int x, int y)
        {
          return abs(x % 10) == abs(y % 10);
        }
