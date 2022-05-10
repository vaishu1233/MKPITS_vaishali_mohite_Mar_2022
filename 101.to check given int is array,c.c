#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array11[] = {10, 20, 40, 50};
    int arr_size11 = sizeof(array11)/sizeof(array11[0]);
    int array12[] = {10, 20, 40, 50};
    int arr_size12 = sizeof(array12)/sizeof(array12[0]);
    printf("%d",test(array11,array12,arr_size11,arr_size12));

    int array21[] = {10, 20, 40, 50};
    int arr_size21 = sizeof(array21)/sizeof(array21[0]);
    int array22[] = {11, 20, 40, 51};
    int arr_size22 = sizeof(array22)/sizeof(array22[0]);
    printf("\n%d",test(array21,array22,arr_size21,arr_size22));

    }

    int test(int nums1[], int nums2[], int arr_size1, int arr_size2)
         {
            return nums1[0] == nums2[0] || nums1[arr_size1 - 1] == nums2[arr_size2 - 1];
        }
