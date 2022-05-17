#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int a1[] = {1, 2, 3, 5, 7};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");
    print_array(a1, arr_size);
    int size = 0;
    int pre_ele_5[arr_size];
     for (int i = 0; i < arr_size; i++)
        {
           if (a1[i] == 5)
              {
                size = i;
                break;
                }
            }
       int result[size];

            for (int j = 0; j < size; j++)
            {
                result[j] = a1[j];
            }
    arr_size = sizeof(result)/sizeof(result[0]);
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
