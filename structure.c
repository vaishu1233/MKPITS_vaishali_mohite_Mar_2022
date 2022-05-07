#include<stdio.h>
#include<conio.h>
struct stud//structure with name stud created by using struct keyword
{// structure open bracket
int id;
char name[20];
}s1;// structure close bracket % created structure variable
void main()
{
clrscr();
printf("enter stud id");
scanf("%d",&s1.id);
printf("enter stud name");
scanf("%s"s1.name);
printf("stud id=%d",s1.id);
printf("stud name=%s",s1.name);
getch();
}
