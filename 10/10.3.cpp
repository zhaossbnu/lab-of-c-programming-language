#include<stdio.h>
struct hour_minute_second
{
    int hour;
    int minute;
    int second;
};
int main(void)
{
    int n;
    struct hour_minute_second a;
    //printf("Enter hour:minute:second :");
    scanf("%d:%d:%d",&a.hour,&a.minute,&a.second);
    //printf("Enter n(0<=n<=60):");
    scanf("%d",&n);
    a.second=a.second+n;
    while(a.second>=60)
    {
        a.second=a.second-60;
        a.minute=a.minute+1;
    }
    while(a.minute>=60)
    {
        a.minute=a.minute-60;
        a.hour=a.hour+1;
    }
    while(a.hour>=24)
    {
        a.hour=a.hour-24;
    }
    printf("%d:%d:%d",a.hour,a.minute,a.second);
    return 0;
}
