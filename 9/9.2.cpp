#include<stdio.h>
void sort(int a[],int n);
int main(void)
{
    int n,a[10],i;
    //printf("Enter n(1<=n<=10):");
    scanf("%d",&n);
    //printf("Enter integers:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,n);
    for(i=0; i<n-1; i++)
        printf("%d ",a[i]);
    printf("%d",a[n-1]);
    return 0;
}
void sort(int a[],int n)
{
    int i,j,min,temp;

    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=min; j<n; j++)
        {
            if(a[min]>a[j]) min=j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

