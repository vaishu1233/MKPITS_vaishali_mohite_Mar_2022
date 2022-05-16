#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,k;
  k=1;
  for(i=1;i<=5;i+=2)
  {
    for(j=5;j>=1;j--)
    {
      if(j>i)
        printf(" ");
      else
        printf("%d ",k++);
    }
    printf("\n");
  }
getch();
}
