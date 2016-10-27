#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,n,s=0,sum=0,i,j;
    printf("Enter a n:");
    scanf("%d%d",&a,&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            b=a*pow(10,j-1);
            s=s+b;
        }
        sum=sum+s;
        s=0;
    }
    printf("%d\n",sum);
    return 0;
}
