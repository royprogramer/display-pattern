#include<stdio.h>
int main()
{
    int x,n,i,j,k,z;
    scanf("%d",&n);
    x=n;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=1;k<=x+1;k++)
        {
             printf("_");

        } x-=2;

        printf("\n");
    }
    return 0;
}
