#include <stdio.h>

int main()

{

  int num1;

 \ printf("Input an integer: \

 ");

  scanf("%d",&num1);



  if(num1>=0 && num1<=20)

  {

    printf("Range [0, 20]");

  }

  else if(num1>=21 && num1<40)

  {

    printf("Range [21, 40]");

  }

  else if(num1>=41 && num1<60)

  {

    printf("Rnage [41, 60]");

  }

  else if(num1>=61 && num1<=80)

  {

    printf("Range [61, 80]");

  }

  else

  {

    printf("Outside of Range.");

  }

  getchar();

}
