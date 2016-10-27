#include<stdio.h>
int countdigit(int n,int digit);
int main(void)
{
    int n,digit,count;
    printf("Enter n digit:");
    scanf("%d%d",&n,&digit);
    count=countdigit(n,digit);
    printf("count=countdigit(%d,%d)=%d\n",n,digit,count);
    return 0;
}
int countdigit(int n,int digit)
{
    int a,count;
    count=0;
    do
    {
        a=n%10;
        n=n/10;
        if(a==digit)
        {
            count++;
        }
    }
    while(n>0);
    return count;
}
