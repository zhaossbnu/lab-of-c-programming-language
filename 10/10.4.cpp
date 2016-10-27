#include <stdio.h>
struct time
{
    int hour, minute, second;
};
void timecal(struct time *a, int n);
int main(void)
{
    int n;
    struct time time;
    scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
    scanf("%d",&n);
    timecal(&time,n);
    printf("%d:%d:%d\n", time.hour, time.minute, time.second);
    return 0;
}
void timecal(struct time *a, int n)
{
    (*a).second=(*a).second+n;
    while((*a).second>=60)
    {
        (*a).second=(*a).second-60;
        (*a).minute=(*a).minute+1;
    }
    while((*a).minute>=60)
    {
        (*a).minute=(*a).minute-60;
        (*a).hour=(*a).hour+1;
    }
    while((*a).hour>=24)
    {
        (*a).hour=(*a).hour-24;
    }
}
