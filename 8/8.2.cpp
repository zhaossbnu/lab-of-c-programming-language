#include<stdio.h>
int main(void)
{
    int n,i,j,k;
    //printf("Enter n(1<=n<=6):");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    //printf("Enter %d*%d integers:",n,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    //printf("Enter %d*%d integers:",n,n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            c[i][j]=0;
            for(k=0; k<n; k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
