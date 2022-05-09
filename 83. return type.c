#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("%d",test(11, 20, 12));
    printf("\n%d",test(30, 30, 17));
    printf("\n%d",test(25, 35, 50));
    printf("\n%d",test(15, 12, 8));
    }
   int test(int x, int y, int z)
        {
            return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
        }
