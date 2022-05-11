#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array1[] = {1, 5, 6, 9, 10, 17};
    int arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("Sum of values in the array of integers except those numbers starting with 5 followed by atleast one 6: ");
    printf("%d",test(array1, arr_size));
  }
  int test(int nums[], int arr_size)
         {
            int sum = 0;
            int inSection = 0;
            for (int i = 0; i < arr_size; i++)
            {
                if (nums[i] == 5) inSection = 1;
                else if (inSection && nums[i] == 6) inSection = 0;
                else if (!inSection) sum += nums[i];
            }
            return sum;
         }
