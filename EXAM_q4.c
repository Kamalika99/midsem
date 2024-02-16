#include<stdio.h>
void main()
{int n,a,b,c,i,count,num[100];
  int k,p;
    printf(" enter a number");
    scanf("%d",&n);
    for ( i = 2; i <= n; i++)
    {
       if(n%i==0) 
      { 
        count++;
        }
       
       if (count!=1)
        {
            i=num[i];
        }
         
        for(c=0,c<100,c++)

        {
    
        
         if(num[c]=a)
         { k=1; } 
         if (num[c]=b)
            {  p=1;}

          
          if(k+p==2)
          {
            printf("%d+%d=%d",a,b,n);
          }
        }
}}