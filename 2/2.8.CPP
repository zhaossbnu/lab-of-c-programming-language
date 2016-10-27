#include<stdio.h>
double fact(int n);
int main(void)
{
    int n,m;
    double result,a,b,c;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result %d %d=%.0lf\n",n,m,result);
    return 0;
}
double fact(int n)
{
    int i;
    double product;
    product=1;
    for(i=1; i<=n; i++)
    {
        product=product*i;
    }
    return product;
}
