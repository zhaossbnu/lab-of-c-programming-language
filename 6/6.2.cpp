#include<stdio.h>
int main(void)
{
    int digit,letter,blank,other;
    char ch;
    digit=letter=blank=other=0;
    printf("Enter characters:");
    ch=getchar();
    while(ch!='\n')
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            letter++;
        else if(ch>='0'&&ch<='9')
            digit++;
        else if(ch=' ')
            blank++;
        else
            other++;
        ch=getchar();
    }

    printf("digit=%d,letter=%d,blank=%d,other=%d",digit,letter,blank,other);
    return 0;
}
