#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("%d",test(13));
    printf("\n%d",test(14));
    printf("\n%d",test(27));
    printf("\n%d",test(41));
    }

    int test(int n)
         {
           return n % 13 == 0 || n % 13 == 1;
        }
