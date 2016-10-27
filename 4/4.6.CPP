#include<stdio.h>
int main(void)
{
    double e=1,i,n,result=1,j;
    printf("Enter n:");
    scanf("%lf",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            result=result*j;
        }
        e=e+1/result;
        result=1;
    }
    printf("%.4lf\n",e);
    return 0;
}
