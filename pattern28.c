#include<stdio.h>
#include<conio.h>

void main()
{
int i, j;
clrscr();
for(i=1;i<=7;i+=2)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
for(i=5;i>=1;i-=2)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
getch();
}
