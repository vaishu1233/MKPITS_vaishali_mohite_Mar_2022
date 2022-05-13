#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr_size;
    int array1[] = {1, 2, 3, 4 };
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {3, 3, 5, 5, 5, 5};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {2, 5, 5, 7, 8, 10};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
  }

  int test(int numbers[], int arr_size)
         {
           int tot_odd = 0, tot_even = 0;

            for (int i = 0; i < arr_size; i++)
            {
                if (tot_odd < 2 && tot_even < 2)
                {
                    if (numbers[i] % 2 == 0)
                    {
                        tot_even++;
                        tot_odd = 0;
                    }
                    else
                    {
                        tot_odd++;
                        tot_even = 0;
                    }
                }
            }
               return tot_odd == 2 || tot_even == 2;
      }
