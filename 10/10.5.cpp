#include<stdio.h>
long int fib(int n);
int main(void)
{
    int n,f;
    //printf("Enter n:");
    scanf("%d",&n);
    f=fib(n);
    printf("%ld",f);
    return 0;
}
long int fib(int n)
{
    long int  result;
    switch(n)
    {
    case 1:
        result=1;
    case 2:
        result=1;
    }
    if(n>=3)
        result=fib(n-1)+fib(n-2);
    return result;
}
