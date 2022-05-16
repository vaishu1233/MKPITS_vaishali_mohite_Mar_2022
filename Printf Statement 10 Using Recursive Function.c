#include<stdio.h>
#include<conio.h>

void Print-1-10-Number(int value)
{
 int i;
 printf("%d\n", value);
 i = value + 1;

 if (i>10)
 return;
 Print-1-10-Number(i);
}

void main()
{
   Print-1-10-Number(1);
}
getch();
}
