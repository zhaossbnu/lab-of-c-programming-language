#include<stdio.h>
double fib(int n);
int main(void)
{
    int m,n,f,i;
    printf("Enter m n(m>=1&&n<=1000):");
    scanf("%d%d",&m,&n);
    if(m==1)
        printf("1 1 ");
    for(i=1; i<=20; i++)
    {
        f=fib(i);
        if(fib(i)>=m&&fib(i)<=n)
            printf("%d ",f);
    }
    return 0;
}
double fib(int n)
{
    double sum1,sum2,sum3,i;
    sum1=1;
    sum2=1;
    sum3=0;
    for(i=1; i<=n; i++)
    {
        sum3=sum1+sum2;
        sum1=sum2;
        sum2=sum3;
    }
    return sum3;
}
