#include<stdio.h>
#include<string.h>
void delchar(char s[],char c);
int main(void)
{
    char s[100],c;
    //printf("Enter a string:");
    gets(s);
    //printf("Enter a character:");
    c=getchar();
    delchar(s,c);
    puts(s);
    return 0;
}
void delchar(char s[],char c)
{
    char a[100];
    int n,i,j=0;
    n=strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i]!=c)
        {
            a[j]=s[i];
            j++;
        }
    }
    a[j]='\0';
    strcpy(s,a);
}
