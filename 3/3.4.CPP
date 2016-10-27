#include<stdio.h>
int main(void)
{
    int n,x,i,a=0,b=0,c=0,d=0,e=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d grades:",n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x<=59)
            e++;
        else if (x<=69)
            d++;
        else if (x<79)
            c++;
        else if (x<89)
            b++;
        else a++;
    }
    printf("A:%d\n",a);
    printf("B:%d\n",b);
    printf("C:%d\n",c);
    printf("D:%d\n",d);
    printf("E:%d\n",e);
    return 0;
}
