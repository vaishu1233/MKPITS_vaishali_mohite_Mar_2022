#include<stdio.h>
#include<math.h>
int main()
{
     int side;
     float sq,area;
     sq=sqrt(3)/4.0;
     printf("Enter Side of Equilateral Triangle : ");
     scanf("%d", &side);
     area=sq*side*side;
     printf("\nArea of Equilateral Triangle = %.3f",area);
     return 0;
}
