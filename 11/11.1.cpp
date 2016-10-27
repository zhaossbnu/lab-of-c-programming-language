#include<stdio.h>
int main(void)
{
    int n;
    char *month[12]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    //printf("Enter a month:");
    scanf("%d",&n);
    printf("%s\n",month[n-1]);
    return 0;
}
