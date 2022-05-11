#include <stdio.h>
#include <stdlib.h>
int main(void){
    int array1[] = {1, 2, 5, 7, 9, 10, 12, 17};
    int arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("Sum of values in the array of integers except the number 17: ");
    printf("%d",test(array1, arr_size));
  }
  int test(int nums[], int arr_size)
         {
            int sum = 0;

            for (int i = 0; i < arr_size; i++)
            {
                if (nums[i] != 17) sum += nums[i];
                else i++;
            }
            return sum;
         }
