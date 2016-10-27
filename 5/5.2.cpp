#include<stdio.h>
int even(int n);
int main(void)
{
    int n,sum=0,y;
    printf("Enter n:");
    scanf("%d",&n);
    while(n>0)
    {
        y=even(n);
        if(y==0)
            sum=sum+n;
        scanf("%d",&n);
    }
    printf("sum=%d\n",sum);
}
int even(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
