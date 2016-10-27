#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter n(1<=n<=9):");
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>=j)
            {
                a[i][j]=(i+1)*(j+1);
                printf("%3d",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
