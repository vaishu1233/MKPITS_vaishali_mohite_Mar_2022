#include <stdio.h>
#include <conio.h>
int main(void)
{
    int arr_size;
    int array1[] = {5, 5, 1, 5, 5};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {1, 2, 3, 4};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {3, 3, 5, 5, 5, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    }
  int test(int nums[], int arr_size)
         {
           for (int i = 0; i < arr_size - 1; i++)
            {
                if (nums[i + 1] < nums[i]) return 0;
            }

          return 1;
         }
