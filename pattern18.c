#include<stdio.h>
#include<conio.h>
int main()
{
int r, i, j, s;
printf("Enter number of rows: ");
scanf("%d",&r);
for(i = r; i >= 1; i--)
{
//for loop to put space in pyramid
for (s = i; s < r; s++)
printf(" ");
//for loop to print star in pyramid
for(j = 1; j <= 2 * i - 1; j++)
{
if(i == r || j == 1 || j == 2*i - 1)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
