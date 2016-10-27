#include<stdio.h>
#include<math.h>
double dist(double x1,double y1,double x2,double y2);
int main(void)
{
    double x1,y1,x2,y2,distance;
    printf("Enter x1 y1 x2 y2:");
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    distance=dist(x1,y1,x2,y2);
    printf("distance(%lf,%lf,%lf,%lf)=%.2lf\n",x1,y1,x2,y2,distance);
    return 0;
}
double dist(double x1,double y1,double x2,double y2)
{
    double d;
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}

