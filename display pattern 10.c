#include<stdio.h>
int main()
{
     int n,i,x=1,k;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(k=n-1;k>=i;k--)
         {
             printf("_");
         }
         for(int j=1;j<=i;j++)
         {

             printf("*");

         }x++;

         printf("\n");
     }
    return 0;
}


