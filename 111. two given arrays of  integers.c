#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size = 3;
    int nums1[] = {10, 20, -30};
    printf("Elements in original array are: ");
    print_array(nums1, arr_size);
    int nums2[] = {10, 20, 30};
    printf("Elements in original array are: ");
    print_array(nums2, arr_size);
    int result[arr_size], i;
    if ( nums1[0] + nums1[1] + nums1[2] >= nums2[0] + nums2[1] + nums2[2])
    {
       for (i = 0; i < arr_size; i++) {
            result[i] = nums1[i];
             }
    }
    else
    {
        for (i = 0; i < arr_size; i++) {
            result[i] = nums2[i];
             }
    }
    printf("The array which has the largest sum.: ");
    print_array(result, arr_size);
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
