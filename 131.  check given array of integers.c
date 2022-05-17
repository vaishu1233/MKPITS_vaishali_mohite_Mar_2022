#include <stdio.h>
#include <conio.h>
int main(void){
    int arr_size;
    int array1[] = {3, 5, 5, 3, 7};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {3, 5, 5, 4, 1, 5, 7};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {3, 5, 5, 5, 5, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    int array4[] = {3, 5, 5, 5, 5, 5};
    arr_size = sizeof(array4)/sizeof(array4[0]);
    printf("\n%d",test(array4, arr_size));
  }
  int test(int numbers[], int arr_len)
         {
           int flag = 0;

            for (int i = 0; i < arr_len; i++)
            {
                if (numbers[i] == 5)
                {
                    if ((i > 0 && numbers[i - 1] == 5) || (i < arr_len - 1 && numbers[i + 1] == 5)) flag = 1;
                    else if (i == arr_len - 1) flag = 0;
                    else return 0;
                }
            }
            return flag;
         }
