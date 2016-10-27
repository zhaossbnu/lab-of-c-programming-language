#include<stdio.h>
#include<math.h>
int prime(int m);
int main(void)
{
    int m,n,i,a,count,sum;
    count=0;
    sum=0;
    printf("Enter m,n:");
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++)
    {
        a=prime(i);
        if(a==1)
        {
            count++;
            sum=sum+i;
        }
    }
    printf("%d,%d\n",count,sum);
    return 0;
}
int prime(int m)
{
    int i,n;
    if(m==1)
        return 0;
    n=sqrt(m);
    for(i=2; i<=n; i++)
        if(m%i==0)
        {
            return 0;
        }
    return 1;
}
