#include<stdio.h>
int main()
{
     int base, height;
     float area_rt;
     printf("Enter Base   : ");
     scanf("%d",&base);
     printf("Enter Height : ");
     scanf("%d",&height);
     area_rt=(1/2.0)*base*height;
     printf("\nArea of Right Angle Triangle = %.2f",area_rt);
     return 0;
}
