#include<stdio.h>
void main()
{
    int a,b,c,num[100],i,d=0,k[100];
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        
        for ( c = 1; c <=i ; c++)
        {
          if(i%c==0)
          {
            c=num[c];
          }
           d=d+num[c];
            
        if (i==d)
        {
            i=k[i];
            printf("\n%d is a perfect numbers",k[i] );
        }
        
        }  
    }
    
}