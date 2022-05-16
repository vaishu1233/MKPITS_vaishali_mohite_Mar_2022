#include<stdio.h>
#include<conio.h>
void main()
{
   int r,i,j;
   clrscr();
   printf("Enter The no. of rows: ");
   scanf("%d",&r);

   for(i=r;i>=1;i--)
   {
   for(j=1;j<=i;j++)
   {
   printf("%d",i%2);
   }

   printf("\n");
   }
   getch();
}
