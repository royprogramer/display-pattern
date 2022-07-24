#include<stdio.h>
int main()
{
     int n,i,x=1,k=1;
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {


         for(k=i;k<=n+x-1;k++)
         {

             printf("%d",k%2);


         }
         x++;
         printf("\n");
     }
    return 0;
}

