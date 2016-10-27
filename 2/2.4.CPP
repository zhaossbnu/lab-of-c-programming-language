#include<stdio.h>
int main(void)
{
    int m,n,i;
    double sum;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    sum=0;
    for(i=m; i<=n; i++)
    {
        sum=sum+i*i+1.0/i;
    }
    printf("sum from %d to %d =%lf\n",m,n,sum);
    return 0;
}
