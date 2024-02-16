#include<stdio.h>
void main()
{
    int x,y,r,x1,y1,d;
    printf(" enter co ords of center and radius value");
    scanf("%d,%d,%d",&x,&y,&r);
    printf("\n\n enter co ords of point");
    scanf("%d,%d",&x1,&y1);
    d=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    if(d>r*r)
    {
     printf(" point is outside the circle");
    }
     else if(d=r*r)
    {
     printf(" point is on the circle");
    }
    else if(d<r*r)
    {
     printf(" point is inside the circle");
    }
    
    

}