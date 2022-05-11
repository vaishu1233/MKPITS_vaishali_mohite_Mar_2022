#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size1;
    int nums1[] = { 1, 5, 7, 9, 11, 13 };
    arr_size1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Elements in original array1 are: ");
    print_array(nums1, arr_size1);
    int result[] = { nums1[arr_size1 / 2 - 1], nums1[arr_size1 / 2], nums1[arr_size1 / 2 + 1]} ;
    printf("New array: ");
    print_array(result, 3);
 }
  print_array(int parray[], int size)
    {
     int i;
     for( i=0; i<size-1; i++)
      {
        printf("%d, ", parray[i]);
       }
    printf("%d ", parray[i]);
    printf("\n");
  }
