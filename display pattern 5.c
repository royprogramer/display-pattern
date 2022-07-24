#include<stdio.h>
int main()
{
     int n,i,x,k=1;
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
          x=n;
         for(k=1;k<=i;k++)
         {

             printf("%d",x);
             x--;

         }
         printf("\n");
     }
    return 0;
}


