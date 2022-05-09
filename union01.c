#include <stdio.h>
#include <string.h>
 union student
{
            int id;
            char name[50];
}s1;
void main()
{
printf("enter student id");
scanf("%d,&s1,id");
peintf("enter stud name");
scanf("%s",&s1.name);
printf("stud id=%d",s1.id);
printf("stud name=%s",s1.name);
}
