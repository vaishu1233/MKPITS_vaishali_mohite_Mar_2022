#include<stdio.h>
int main()
{
     int F;
     float cel;
     printf("Enter Temperature in Fahrenheit : ");
     scanf("%d",&F);
     cel=(F-32)/1.8;
     printf("\nTemperature in Celsius = %.2f", cel);
     return 0;
}
