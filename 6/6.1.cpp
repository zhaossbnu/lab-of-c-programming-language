#include<stdio.h>
int main(void)
{
    int a,m,m1,n,n1;
    printf("Enter a:");
    scanf("%d",&a);
    m=n=a;
    do
    {
        m1=m%8;
        m=m/8;
        printf("%d",m1);
    }
    while(m!=0);
    printf(",");
    do
    {
        n1=n%16;
        n=n/16;
        if(n1>=0&&n1<=9)
            printf("%d",n1);
        switch(n1)
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        }
    }
    while(n!=0);
    return 0;
}
