#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int i,n,y;
    //printf("Enter characters:");
    gets(a);
    n=strlen(a);
    for(i=0; i<n/2; i++)
    {
        if(a[i]!=a[n-i-1])
        {
            y=0;
            break;
        }
    }
    if(y==0)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
