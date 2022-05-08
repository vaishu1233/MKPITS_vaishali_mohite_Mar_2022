#include<stdio.h>
int main()
{
     int amt, yrs;
     float rate_intrest,SI;
     printf("Enter Principal Amount : ");
     scanf("%d", &amt);
     printf("Enter Number of Years  : ");
     scanf("%d", &yrs);
     printf("Enter Rate of Interest : ");
     scanf("%f", &rate_intrest);
     SI=amt*yrs*rate_intrest/100.0;
     printf("\nSimple Interest =  %.2f",SI);
     return 0;
}
