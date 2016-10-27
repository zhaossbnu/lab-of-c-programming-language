#include<stdio.h>
int main(void)
{
    int n,a[10],i,j,k,p,temp1,temp2;
    printf("Enter n(1<n<=10):");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    j=0;
    p=0;
    for(k=1; k<n; k++)
        if(a[k]<a[j])
            j=k;
    temp1=a[j];
    a[j]=a[0];
    a[0]=temp1;
    for(k=1; k<n; k++)
        if(a[k]>a[p])
            p=k;
    temp2=a[p];
    a[p]=a[n-1];
    a[n-1]=temp2;
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;

}
