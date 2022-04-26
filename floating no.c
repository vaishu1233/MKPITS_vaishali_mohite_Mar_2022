#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,r1,r2,d;
  printf("Input the first num\
ber: ");
  scanf("%f",&a);
  printf("Input the second\
number: ");
  scanf("%f",&b);
  printf("Input the third\
number: ");
  scanf("%f",&c);

  d=sqrt((b*b)-(4*a*c));

  r1=(-b+d)/(2*a);
  r2=(-b-d)/(2*a);

  printf("Root1 = %.5f\n",r1);
  printf("Root2 = %.5f\n",r2);
}
