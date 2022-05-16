#include<stdio.h>
#include<conio.h>

 void main()
 {
  static int i = 1;
  if (i <= 10)
  {
   printf("%d", i++);
   main();
  }
 getch();
}
