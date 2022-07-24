#include<stdio.h>
int main()
{
     int n,i,k,j;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(k=n-1;k>=i;k--)
         {
             printf("_");
         }
         for(int j=1;j<=i;j++)
         {

             printf("* ");

         }

         printf("\n");
     }
     for(i=1;i<n;i++)
     {
         for( j=1;j<=i;j++)
         {
             printf("_");

         }
         for(k=n-1;k>=i;k--)
         {

             printf("* ");

         }

         printf("\n");
     }

    return 0;
}
