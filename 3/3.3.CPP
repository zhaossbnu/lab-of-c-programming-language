#include<stdio.h>
int main(void)
{
    int i;
    double x;
    for(i=1; i<=5; i++)
    {
        printf("Enter x:");
        scanf("%lf",&x);
        if(x<60)
        {
            printf("Fail.\n");
        }
        else
        {
            printf("Pass.\n");
        }
    }
    return 0;
}
