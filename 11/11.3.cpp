#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max_len(char *s[], int n);
int main(void)
{
    int n,i;
    //printf("Enter n:");
    scanf("%d",&n);
    getchar();
    char *s[10],str[100];
    //printf("Enter %d strings:",n);
    for(i=0; i<n; i++)
    {
        gets(str);
        s[i]=(char *)malloc(sizeof(char)*strlen(str)+1);
        strcpy(s[i],str);
    }
    printf("%d\n",max_len(s,n));
    for(i=0; i<n; i++)
        free(s[i]);
    return 0;
}
int max_len(char *s[],int n)
{
    int i,index=0;
    for(i=0; i<n; i++)
    {
        if(strlen(s[index])<strlen(s[i])) index=i;
    }
    return strlen(s[index]);
}
