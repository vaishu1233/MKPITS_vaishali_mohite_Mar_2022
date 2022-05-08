#include<stdio.h>
#include<math.h>
int main()
{
     int p,yrs;
     float rate,CI,amt;
     printf("Enter Principal Amount : ");
     scanf("%d", &p);
     printf("Enter Number of Years  : ");
     scanf("%d", &yrs);
     printf("Enter Rate of Interest : ");
     scanf("%f", &rate);
     amt= p* pow((1+rate/100.0),yrs);
     CI=amt-p;
     printf("\nCompound Interest =  %.2f\n", CI);
     printf("\nTotal Amount      =  %.2f\n", amt);
     return 0;
}
