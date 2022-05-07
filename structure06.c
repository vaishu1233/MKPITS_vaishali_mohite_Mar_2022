#include<stdio.h>
#include <string.h>
struct bill
{   int id;
  char address[200];
  float amount;
}p1,p2;
int main( )
{
printf("TechVidvan Tutorial: Accessing members of structure!\n\n");
   p1.id=1;
   strcpy(p1.address, "Sector 41B, Market Complex, City: Siliguri, State: West Bengal");
   p1.amount=5689.36;
   printf("Details of First Person!\n");
   printf("Id of first person is: %d\n",p1.id);
   printf("Amount due by first person is: %f\n",p1.amount);
   printf("Address of first person is: %s\n",p1.address);
   p2.id=2;
   strcpy(p2.address, "Sector 43B, Road No-06, Market Complex, City: Siliguri, State: West Bengal");
   p2.amount=5644.36;
   printf("Details of Second Person!\n");
   printf("Id of Second person is: %d\n",p2.id);
   printf("Amount due by second person is: %f\n",p2.amount);
   printf("Address of second person is: %s\n",p2.address);

   return 0;
}
