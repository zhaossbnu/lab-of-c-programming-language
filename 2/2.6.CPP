#include<stdio.h>
int main(void)
{
    int flag,n;
    double i,sum;
    printf("Enter n:");
    scanf("%d",&n);
    sum=0;
    flag=1;
    for(i=1; i<=n; i++)
    {
        sum=sum+flag*i/(2*i-1);
        flag=-flag;
    }
    printf("sum from 1 to %d=%lf\n",n,sum);
    return 0;
}
