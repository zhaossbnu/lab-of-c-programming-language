#include<stdio.h>
int main(void)
{
    char s[80];
    int i;
    i=0;
    while((s[i]=getchar())!='\n')
        i++;
    s[i]='\0';
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=155-s[i];
            printf("%c",s[i]);
        }
        else
            printf("%c",s[i]);
        i++;
    }
    return 0;
}
