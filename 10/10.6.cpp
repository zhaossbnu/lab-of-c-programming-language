#include<stdio.h>
double pow(int x,int n);
int main(void)
{
    int x,n;
    double result;
    //printf("Enter x and n(n>=0):");
    scanf("%d%d",&x,&n);
    result=pow(x,n);
    printf("%lf",result);
    return 0;
}
double pow(int x,int n)
{
    double result;
    if(n<0&&x!=0)
    {
        result=pow(x,n+1)/x;
    }
    if(n==0&&x!=0)
    {
        result=1;
    }
    if(n>0)
    {
        result=x*pow(x,n-1);
    }
    return result;
}
