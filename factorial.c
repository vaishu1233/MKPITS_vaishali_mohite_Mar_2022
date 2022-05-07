#include<stdio.h>
#include<conio.h>
int fun(int x)
{
	int f;
	if(x==0)
	{
	return 1;
	}
	else
	{
	f=x*fun(x-1);
	}

}
int main()
{
	int y,fact;
	printf("enter the number: ");
	scanf("%d",&y);
	fact=fun(y);
	printf("factorial= %d\n",fact);
}
