#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {1, 5, 7};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("Elements in original array are: ");
    print_array(array1, arr_size);
    for (int i = 0; i < arr_size - 1; i++)
            {
                if (array1[i] == 5 && array1[i + 1] == 7)
                    array1[i + 1] = 1;
            }
    printf("Elements in new array are: ");
    print_array(array1, arr_size);
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
