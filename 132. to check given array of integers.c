#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {3, 7, 5, 5, 3, 7};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size, 2));
    int array2[] = {3, 7, 5, 5, 3, 7};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size, 3));
    int array3[] = {3, 7, 5, 5, 3, 7, 5 };
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size, 3));
  }

  int test(int numbers[], int arr_size, int len)
         {
          for (int i = 0; i < len; i++)
            {
                if (numbers[i] != numbers[arr_size - len + i])
                {
                    return 0;
                }
            }
            return 1;
         }
