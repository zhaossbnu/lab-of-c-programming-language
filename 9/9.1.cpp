#include<stdio.h>
int search(int list[],int n,int x);
int main(void)
{
    int n,list[10],x,i,y;
    //printf("Enter n(1<=n<=10):");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&list[i]);
    //printf("Enter x:");
    scanf("%d",&x);
    y=search(list,n,x);
    if(y==-1)
        printf("Not found\n");
    if(y>=0)
        printf("%d\n",y);
    return 0;
}
int search(int list[],int n,int x)
{
    int i;
    for(i=0; i<n; i++)
        if(list[i]==x)
            return i;
    return -1;
}

