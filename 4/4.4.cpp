#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n,j,sqr,i,count;
    printf("Enter m,n:");
    scanf("%d%d",&m,&n);
    for(j=m; j<=n; j++)
    {
        sqr=sqrt(j);
        for(i=2; i<=sqr; i++)
        {
            if(j%i==0) break;
        }
        if(i>sqr)
        {
            printf("%d ",j);
            count++;
            if(count%6==0) printf("\n");
        }
    }
    return 0;
}
