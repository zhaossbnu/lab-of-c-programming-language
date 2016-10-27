#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,area,perimeter,s;
    printf("Enter a b c :");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        perimeter=a+b+c;
        s=perimeter/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("perimeter=%lf\narea=%lf\n",perimeter,area);
    }
    else
    {
        printf("These sides do not correspond to a valid triangle.");
    }
    return 0;
}
