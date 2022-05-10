#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d",test(3));
    printf("\n%d",test(7));
    printf("\n%d",test(21));
    }

    int test(int n)
         {
            return n % 3 == 0 ^ n % 7 == 0;

        }
