#include<stdio.h>
int main(void)
{
    int count;
    char ch;
    count=1;
    printf("Enter characters:");
    ch=getchar();
    while(ch!='\n')
    {
        if(ch==' ')
            count++;
        ch=getchar();
    }
    printf("%d",count);
    return 0;
}
