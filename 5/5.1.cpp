# include<stdio.h>
double sign(double n);
int main(void)
{
    int y;
    double x;
    printf("Enter x:");
    scanf("%lf",&x);
    y=sign(x);
    printf("y=sign(%lf)=%d\n",x,y);
    return 0;
}
double sign(double x)
{
    if(x<0)
    {
        return -1;
    }
    else if(x==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
