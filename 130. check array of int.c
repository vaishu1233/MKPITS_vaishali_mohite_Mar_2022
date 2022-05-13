#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = { 3, 5, 1, 5, 3, 5, 7, 5, 1, 5 };
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {3, 5, 5, 5, 5, 5, 5};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {3, 5, 2, 5, 4, 5, 7, 5, 8, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    int array4[] = {2, 4, 5, 5, 5, 5};
    arr_size = sizeof(array4)/sizeof(array4[0]);
    printf("\n%d",test(array4, arr_size));
  }

  int test(int numbers[], int arr_size)
         {
          int flag = 0;
          int five = 0;

            for (int i = 0; i < arr_size; i++)
            {
                if (numbers[i] == 5 && !flag)
                {
                    five++;
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }

            return five == 5;
         }
