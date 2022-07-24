#include<stdio.h>
int main()
{
     int n,i,x=1,k=1;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {

             printf("%d ",x++);

         }
         k++;
          x=k;

         printf("\n");
     }
    return 0;
}
