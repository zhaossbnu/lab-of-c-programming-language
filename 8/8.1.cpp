#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n(1<=n<=6):");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n],d[n][n];
    printf("Enter %d*%d integers:",n,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("Enter %d*%d integers:",n,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%4d",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
