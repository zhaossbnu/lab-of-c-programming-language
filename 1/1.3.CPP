#include<stdio.h>
int main(void)
{
    int n,ge,shi,bai,qian;
    printf("INPUT:");
    scanf("%d",&n);
    ge=n%10;
    shi=n/10%10;
    bai=n/100%10;
    qian=n/1000;
    printf("ge=%d\nshi=%d\nbai=%d\nqian=%d\n",ge,shi,bai,qian);
    return 0;
}
