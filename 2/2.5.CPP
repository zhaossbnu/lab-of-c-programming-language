#include<stdio.h>
int main(void)
{
    int i,n,flag;
    double sum;
    printf("Enter n:");
    scanf("%d",&n);
    flag=1;
    sum=0;
    for(i=1; i<=n; i=i+1)
    {
        sum=sum+flag*1.0/(3*i-2);
        flag=-flag;
    }
    printf("sum from 1 to %d=%.3lf\n",n,sum);
    return 0;
}
