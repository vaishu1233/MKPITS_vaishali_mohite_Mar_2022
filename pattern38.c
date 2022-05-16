#include<stdio.h>
#include<conio.h>

void main()
{
int i,n,sum=0;
 clrscr();
	n=10;
    for(i=1;i<=n;i++)
    {
        sum+=i*i;
    }
    printf("Sum: %d",sum);
getch();
}
