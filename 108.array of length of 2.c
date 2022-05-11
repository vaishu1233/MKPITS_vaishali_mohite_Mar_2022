#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {12, 20};
    printf("%d",test(array1));
    int array2[] = {14, 15};
    printf("\n%d",test(array2));
    int array3[] =  {11, 21};
    printf("\n%d",test(array3));
    }
    int test(int nums[])
         {
               return nums[0] != 12 && nums[0] != 15 && nums[1] != 12 && nums[1] != 15;
        }
