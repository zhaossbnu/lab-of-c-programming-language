#include<stdio.h>
#include<math.h>
int main(void)
{
    double i,s,flag,eps;
    i=1;
    s=0;
    flag=1;
    printf("eps(eps>0)=");
    scanf("%lf",&eps);
    while(i==1||fabs(1/(3*(i-1)-2))>=eps)
    {
        s=s+flag*1/(3*i-2);
        i++;
        flag=-flag;
    }
    printf("%lf\n",s);
    return 0;
}
