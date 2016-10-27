#include<stdio.h>
int main(void)
{
    int time1,time2,m1,n1,m2,n2,time;
    printf("Enter time1 and time2:");
    scanf("%d%d",&time1,&time2);
    m1=time1/100;
    n1=time1%100;
    m2=time2/100;
    n2=time2%100;
    time=60*(m2-m1)+n2-n1;
    printf("%d\n",time);
    return 0;
}
