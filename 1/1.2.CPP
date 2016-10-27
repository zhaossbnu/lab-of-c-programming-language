#include<stdio.h>
int main(void)
{
    int n,ge,shi,bai;
    printf("Enter n:");
    scanf("%d",&n);
    ge=n%10;
    shi=n/10%10;
    bai=n/100;
    printf("ge=%d\nshi=%d\nbai=%d\n",ge,shi,bai);
    return 0;
}
