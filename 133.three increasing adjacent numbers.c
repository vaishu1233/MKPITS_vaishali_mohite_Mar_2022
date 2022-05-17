#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {1, 2, 3, 5, 3, 7};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {3, 7, 5, 5, 3, 7 };
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = { 3, 7, 5, 5, 6, 7, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
  }

  int test(int numbers[], int arr_size)
         {
           for (int i = 0; i <= arr_size - 3; i++)
            {
                if (numbers[i] == numbers[i + 1] - 1
                    && numbers[i] == numbers[i + 2] - 2)
                {
                    return 1;
                }
            }
            return 0;
         }
