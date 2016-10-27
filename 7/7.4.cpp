#include<stdio.h>
int main(void)
{
    int x,a[5],i,m,j;
    printf("Enter 5 integers in order:");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);
    printf("Enter x:");
    scanf("%d",&x);
    for(i=0; i<5; i++)
    {
        if(x==a[i])
        {
            printf("Yes\n");
            printf("%d",i);
            break;
        }
        if(x<a[0])
        {
            printf("No\n");
            printf("%d ",x);
            for(i=0; i<4; i++)
            {
                printf("%d ",a[i]);
            }
            printf("%d",5);
            break;
        }
        if(x>a[4])
        {
            printf("No\n");
            for(i=0; i<5; i++)
            {
                printf("%d ",a[i]);
            }
            printf("%d",x);
            break;
        }
        if(x>a[i]&&x<a[i+1])
        {
            printf("No\n");
            for(j=0; j<i+1; j++)
                printf("%d ",a[j]);
            printf("%d ",x);
            for(j=i+1; j<5; j++)
                printf("%d ",a[j]);
            break;
        }
    }
    return 0;
}
