#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,n,sum=0;
 clrscr();
    n=10;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
    }
    printf("Sum: %d",sum);
getch();
}
