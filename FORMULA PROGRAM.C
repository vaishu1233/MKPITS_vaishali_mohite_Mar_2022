1) calculate circumference of circle


#include<stdio.h>
int main()
{
     int r;
     float cir;
     printf("Enter Radius : ");
     scanf("%d",&r);
     cir=2*3.14*r;
     printf("\nCircumference of Circle = %.2f",cir);
     return 0;
}

2) Volume of sphere= 4/3 * 3.14 * r * r * r
  

 #include<stdio.h>
int main()
{
     int r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     volume_sphere = (4/3.0)*3.14*r*r*r;
     printf("\nVolume of Sphere = %f",volume_sphere);
     return 0;
} 

3)

 #include<stdio.h> o.h>
int main()
{
     int side,squ_area;
     printf("Enter Side : ");
     scanf("%d",&side);
     squ_area=side*side;
     printf("\nArea of Square = %d",squ_area);
     return 0;
} 

4) calculate circumference of circle.

 
#include<stdio.h>
int main()
{
     int r;
     float cir;
     printf("Enter Radius : ");
     scanf("%d",&r);
     cir=2*3.14*r;
     printf("\nCircumference of Circle = %.2f",cir);
     return 0;
}

5) calculate valume of sphere

#include<stdio.h>
int main()
{
     int r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     volume_sphere = (4/3.0)*3.14*r*r*r;
     printf("\nVolume of Sphere = %f",volume_sphere);
     return 0;
}


6) find area of sqaure

#include<stdio.h>
int main()
{
     int side,squ_area;
     printf("Enter Side : ");
     scanf("%d",&side);
     squ_area=side*side;
     printf("\nArea of Square = %d",squ_area);
     return 0;
}

7) area of equilateral triangle

#include<stdio.h>
#include<math.h>
int main()
{
     int side;
     float sq,area;
     sq=sqrt(3)/4.0;
     printf("Enter Side of Equilateral Triangle : ");
     scanf("%d", &side);
     area=sq*side*side;
     printf("\nArea of Equilateral Triangle = %.3f",area);
     return 0;
}

8) area of triangle 

#include<stdio.h>
#include<math.h>
int main()
{
     int a,b,c;
     float s,tri_area;
     printf("Enter Sides of Triangle\n");
     printf("----------------------------\n");
     printf("Enter First Side  : ");
     scanf("%d",&a);
     printf("Enter Second Side : ");
     scanf("%d",&b);
     printf("Enter Third Side  : ");
     scanf("%d",&c);
     s =(a+b+c)/2.0;
     tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("----------------------------\n");
     /* %.3f is used to print an area up to three decimal places.
     Otherwise, it will take default 6 decimal places*/
     printf("Area of Triangle = %.3f",tri_area);
     return 0;
}


9) to calculate compound interest

#include<stdio.h>
#include<math.h>
int main()
{
     int p,yrs;
     float rate,CI,amt;
     printf("Enter Principal Amount : ");
     scanf("%d", &p);
     printf("Enter Number of Years  : ");
     scanf("%d", &yrs);
     printf("Enter Rate of Interest : ");
     scanf("%f", &rate);
     amt= p* pow((1+rate/100.0),yrs);
     CI=amt-p;
     printf("\nCompound Interest =  %.2f\n", CI);
     printf("\nTotal Amount      =  %.2f\n", amt);
     return 0;
}

10) to convert temperature Fahrenheit to Celsius.
 

#include<stdio.h>
int main()
{
     int F;
     float cel;
     printf("Enter Temperature in Fahrenheit : ");
     scanf("%d",&F);
     cel=(F-32)/1.8;
     printf("\nTemperature in Celsius = %.2f", cel);
     return 0;
} 


11) area of rectangle

#include<stdio.h>
int main()
{
     int length, breadth, rect_area;
     printf("Enter Length  : ");
     scanf("%d",&length);
     printf("Enter Breadth : ");
     scanf("%d",&breadth);
     rect_area = length * breadth;
     printf("\nArea of Rectangle = %d",rect_area);
     return 0;
}

12) to find surface area of sphere.


#include<stdio.h>
int main()
{
     int r;
     float sur_area_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     sur_area_sphere = (4/3.0)*3.14*r*r;
     printf("\nSurface Area of Sphere = %.2f", sur_area_sphere);
     return 0;
}

13) to find area of right angle triangle.


#include<stdio.h>
int main()
{
     int base, height;
     float area_rt;
     printf("Enter Base   : ");
     scanf("%d",&base);
     printf("Enter Height : ");
     scanf("%d",&height);
     area_rt=(1/2.0)*base*height;
     printf("\nArea of Right Angle Triangle = %.2f",area_rt);
     return 0;
}

14) to calculate perimeter of rectangle.
  

#include<stdio.h>
int main()
{
     int length, breadth, rect_perimeter;
     printf("Enter Length  : ");
     scanf("%d", &length);
     printf("Enter Breadth : ");
     scanf("%d", &breadth);
     rect_perimeter= 2*(length+breadth);
     printf("\nPerimeter of Rectangle = %d",rect_perimeter);
     return 0;
}

15) to calculate simple interest.


#include<stdio.h>
int main()
{
     int amt, yrs;
     float rate_intrest,SI;
     printf("Enter Principal Amount : ");
     scanf("%d", &amt);
     printf("Enter Number of Years  : ");
     scanf("%d", &yrs);
     printf("Enter Rate of Interest : ");
     scanf("%f", &rate_intrest);
     SI=amt*yrs*rate_intrest/100.0;
     printf("\nSimple Interest =  %.2f",SI);
     return 0;
}

16) to convert days into years, weeks and days.


#include<stdio.h>
int main()
{
     int yrs,weeks,days;
     printf("Enter days: ");
     scanf("%d",&days);
     /*To calculate year*/
     yrs = days/365; // Here, leap years are ignored
     /* To calculate weeks*/
     weeks = (days%365)/7;
     /* To calculate days*/
     days = days-((yrs*365) + (weeks*7));
     /* Print calculated years,weeks & days*/
     printf("\n%d Years, %d Weeks & %d Days.",yrs,weeks,days);
     return 0;
}


© 2022 GitHub, Inc.
