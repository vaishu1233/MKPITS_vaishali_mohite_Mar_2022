#include <stdio.h>
int main( )
{
int a, b, c;
printf("Please enter three numbers: ");
scanf("%d%d%d",&a, &b, &c);
if(a > b)
{
if(a > c){printf("a is the greatest among the three"); }
else{printf("c is the greatest among the three");}
}
else
{
if(b > c){printf("b is the greatest among the three");}
else{printf("c is the greatest among the three");}
}
}
