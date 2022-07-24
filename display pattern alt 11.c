#include<stdio.h>
int main()
{
    int num,k,i,j;
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {

    for( k=i;k<=num;k++)
            {
                printf("_");
            }
       for(j=k;j<=num+i;j++)
       {
        printf("* ");

       }
       printf("\n");


    }
    for(int z=1;z<=i;z++)
       {
        printf("* ");

       }
    return 0;
}

