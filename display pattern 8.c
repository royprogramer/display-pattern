#include<stdio.h>
int main()
{
     int n,i,x,k=1;
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {

         for(k=n;k>=i;k--)
         {

             printf("*");


         }
         printf("\n");
     }
    return 0;
}
