#include<stdio.h>
int factorsum(int n);
int main(void)
{
    int m,n,i,f;
    printf("Enter m n(m>=1,n<=500):");
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++)
    {
        f=factorsum(i);
        if(f==i)
            printf("%d ",i);
    }
    return 0;
}
int factorsum(int n)
{
    int sum,i,e;
    sum=0;
    for(i=1; i<n; i++)
    {
        e=n%i;
        if(e==0)
            sum=sum+i;
    }
    return sum;
}
