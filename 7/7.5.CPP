#include<stdio.h>
int main()
{
    int a[10],b[10];
    int i,j,cao,minnum=0,temp;
    printf("Enter 10 integers:");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(cao=0; cao<9; cao++)
    {
        i=cao;
        for(minnum=cao; i<10; i++)  if(a[i]<a[minnum]) minnum=i;
        temp=a[cao];
        a[cao]=a[minnum];
        a[minnum]=temp;
    }
    for(i=0,j=0; i<10; i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0; i<10; i++)
    {
        if(a[i]%2==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(j=9; j>=0; j--)
    {
        printf("%d ",b[j]);
    }
    return 0;
}

