#include<stdio.h>
#include<math.h>
int is(int number);
int main(void)
{
    int m,n,i,y;
    printf("Enter m n(m<n):");
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++)
    {
        y=is(i);
        if(y==1)
            printf("%d\n",i);
    }
    return 0;
}
int is(int number)
{
    int a,sum,y,n;
    sum=0;
    n=number;
    do
    {
        a=n%10;
        n=n/10;
        sum=sum+(int)pow((int)a,3);
    }
    while(n>0);
    if(sum==number)
        return 1;
    else
        return 0;
}
