#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n;
    double power;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        power=pow(3,i);
        printf("pow(3,%d)=%.0lf\n",i,power);
    }
    return 0;
}
