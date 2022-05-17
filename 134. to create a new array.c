#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int a1[] = {10, 20, 30, 40};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");
    print_array(a1, arr_size);
    int result[arr_size];
    for (int i = 0; i < arr_size; i++)
         {
           result[i] = a1[(i + 1) % arr_size];
         }
    printf("\nElements in new array are: ");
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
