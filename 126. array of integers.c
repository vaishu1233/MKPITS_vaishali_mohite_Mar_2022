#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {1, 5, 5, 5, 5};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = { 2, 7, 8, 10};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {3, 3, 3, 5, 5, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
  }

  int test(int numbers[], int arr_size)
         {
            int t_num = 0, f_num = 0;
            for (int i = 0; i < arr_size - 1; i++)
            {
                if (numbers[i] == 3 && numbers[i + 1] == 3)
				 t_num = 1;
				else t_num=0;
                if (numbers[i] == 5 && numbers[i + 1] == 5)
				 f_num = 1;
				else f_num=0;
            }
            return t_num ^ f_num;
         }
