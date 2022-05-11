#include <stdio.h>
#include <stdlib.h>
int main(void){
    int new_arr_size = 6;
    int arr_size1, arr_size2;
    int nums1[] = {10, 20, 30};
    int nums2[] = {40, 50, 60};
    arr_size1 = sizeof(nums1)/sizeof(nums1[0]);
    arr_size2 = sizeof(nums2)/sizeof(nums2[0]);
    printf("Elements in original array1 are: ");
    print_array(nums1, arr_size1);
    printf("Elements in original array2 are: ");
    print_array(nums2, arr_size2);
    int result[] = { nums1[0], nums1[1], nums1[2], nums2[0], nums2[1], nums2[2] };
    printf("New array: ");
    print_array(result, new_arr_size);
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
