#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {12, 20};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {20, 20};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] =  {10};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    }
    int test(int nums[], int size)
         {
             return size == 2
                && ((nums[0] == 10 && nums[1] == 10)
                     || (nums[0] == 20 && nums[1] == 20));
        }
