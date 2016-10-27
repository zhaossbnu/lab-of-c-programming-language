#include<stdio.h>
int main(void)
{
    char str[80];
    int i,count;
    printf("Enter characters:");
    gets(str);
    str[i]='\0';
    count=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>'A'&&str[i]<='Z'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
            count++;
    }
    printf("%d",count);
    return 0;
}
