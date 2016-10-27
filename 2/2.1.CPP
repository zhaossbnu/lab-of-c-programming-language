#include<stdio.h>
int main(void)
{
    int i,m,sum;
    printf("Enter m(m>=0&&m<=100):");
    scanf("%d",&m);
    sum=0;
    for(i=m; i<=100; i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
