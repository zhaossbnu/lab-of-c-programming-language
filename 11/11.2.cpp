#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char *week[7]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    char w[100];
    //printf("Enter a string:");
    scanf("%s",w);
    for(i=0; i<7; i++)
    {
        if(strcmp(w,week[i])==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    if(i>=7) printf("-1\n");
    return 0;
}
