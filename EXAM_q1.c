#include<stdio.h>
#include<math.h>
void main()
{
  float r,h,a,pi,v;
  printf("enter radius and height");
  scanf("%f%f",&r,&h);
   pi=3.14;
   a=pi*r*(2*h+r);
   v=pi*r*r*h;
   printf("surface area is %.2f",a);
   printf("volume is %.2f",v);
}