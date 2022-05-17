#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int a1[] = {1, 2, 3, 5, 7, 9, 11};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");
    print_array(a1, arr_size);

    int size = 0;
    int len = arr_size;
    int i = len - 1;
    while (i >= 0 && a1[i] != 5) i--;
    i++;
    size = len - i;
    int post_ele_5[size];
    for (int j = 0; j < size; j++)
      {
          post_ele_5[j] = a1[i + j];
      }
    arr_size = sizeof(post_ele_5)/sizeof(post_ele_5[0]);
    printf("\nElements in new array are: ");
    print_array(post_ele_5, arr_size);
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
