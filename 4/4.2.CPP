#include<stdio.h>
int main(void)
{
    int count,sum,number;
    sum=0;
    count=0;
    printf("Enter number:");
    scanf("%lf",&number);
    if(number<0) number=-number;
    do
    {
        sum=sum+number%10;
        number=number/10;
        count++;
    }
    while(number!=0);
    printf("%d %d\n",sum,count);
    return 0;
}
