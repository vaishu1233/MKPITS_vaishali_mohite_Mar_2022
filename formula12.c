#include<stdio.h>
int main()
{
     int r;
     float sur_area_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     sur_area_sphere = (4/3.0)*3.14*r*r;
     printf("\nSurface Area of Sphere = %.2f", sur_area_sphere);
     return 0;
}
