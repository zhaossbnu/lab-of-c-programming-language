#include<stdio.h>
int main(void)
{
    int y;
    double x;
    printf("Enter x:");
    scanf("%lf",&x);
    if(x<0)
    {
        y=-1;
    }
    else if(x==0)
    {
        y=0;
    }
    else
    {
        y=1;
    }
    printf("y=sign(%lf)=%d\n",x,y);
    return 0;
}
