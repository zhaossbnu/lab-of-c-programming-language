#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char a[100],b[100];
    gets(a);
    for(i=1; i<5; i++)
        if(strlen(a)<strlen(gets(b))) strcpy(a,b);
    puts(a);
    return 0;
}


