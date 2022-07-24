#include<stdio.h>
int main()
{
     int n,i,x,k=1;
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {

         for(k=1;k<=i;k++)
         {

             printf("%d",k);


         }
         printf("\n");
     }
    return 0;
}
