#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;

    printf("\n Please Enter the total Number of Elements  :  ");
    scanf("%d", &number);

    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);

    i = 0;
    while(i < number - 1) {
        j = 0;
        while(j < number - i - 1) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    printf("\n List in Ascending Order : ");
    for(i = 0; i < number; i++)
        printf(" %d \t", a[i]);
    printf("\n");
    return 0;
}
