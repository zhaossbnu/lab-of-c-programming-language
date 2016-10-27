# include<stdio.h>
int main(void)
{
    int i,m;
    double sum;
    printf("Enter m(m>=0&&m<=100):");
    scanf("%d",&m);
    sum=0;
    for(i=m; i<=100; i++)
    {
        sum=sum+i*i+1.0/i;
    }
    printf("sum from %d to 100=%lf\n",m,sum);
    return 0;
}
