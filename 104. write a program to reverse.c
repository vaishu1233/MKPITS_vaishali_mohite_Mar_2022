#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int a1[] = {10, 20, 30, 40, 50};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");
    print_array(a1, arr_size);
    int result[] = { a1[4], a1[3], a1[2], a1[1], a1[0] };
    arr_size = sizeof(result)/sizeof(result[0]);
    printf("\nElements in reverse array are: ");
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
