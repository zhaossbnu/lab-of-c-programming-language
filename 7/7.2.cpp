#include<stdio.h>
int main(void)
{
    int n,a[10],i,j,k,p;
    printf("Enter n(1<n<=10):");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    j=0;
    p=0;
    for(k=1; k<n; k++)
    {
        if(a[k]<a[j]) j=k;
        if(a[k]>a[p]) p=k;
    }
    printf("min is %d ,tsub is %d.\n",a[j],j);
    printf("max is %d,tsub is %d.\n",a[p],p);
    return 0;

}
