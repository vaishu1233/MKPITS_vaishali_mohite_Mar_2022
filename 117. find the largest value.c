#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr_size;
    int array1[] = {1};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {1,2,9};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {1,2,9,3,3};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    }
  int test(int numbers[], arr_size)
         {
            int first, middle_ele, last_ele, max_ele;
            first = numbers[0];
            middle_ele = numbers[arr_size / 2];
            last_ele = numbers[arr_size - 1];
            max_ele = first;

            if (middle_ele > max_ele)
            {
                max_ele = middle_ele;
            }
            if (last_ele > max_ele)
            {
                max_ele = last_ele;
            }
            return max_ele;
        }
