#include<stdio.h>
double fact(int n);
int main(void)
{
    double e=1,i,n;
    printf("Enter n:");
    scanf("%lf",&n);
    for(i=1; i<=n; i++)
    {
        e=e+1/fact(i);
    }
    printf("%.4lf",e);
    return 0;
}
double fact(int n)
{
    double i,result;
    result=1;
    for(i=1; i<=n; i++)
        result=result*i;
    return result;
}
