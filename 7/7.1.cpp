#include<stdio.h>
int main(void)
{
    int a,m,m1,n1,n,o[100],i,j,p,q;
    char x[100],x1;
    printf("Enter a:");
    scanf("%d",&a);
    if(a==0)
        printf("0\n0");
    else
    {
        m=n=a;
        for(i=0; m!=0; i++)
        {
            m1=m%8;
            m=m/8;
            o[i]=m1;
            p=i;
        }
        for(i=p; i>=0; i--)
            printf("%d",o[i]);
        printf("\n");
        for(j=0; n!=0; j++)
        {
            n1=n%16;
            n=n/16;
            switch(n1)
            {
            case 0:
                x1='0';
                break;
            case 1:
                x1='1';
                break;
            case 2:
                x1='2';
                break;
            case 3:
                x1='3';
                break;
            case 4:
                x1='4';
                break;
            case 5:
                x1='5';
                break;
            case 6:
                x1='6';
                break;
            case 7:
                x1='7';
                break;
            case 8:
                x1='8';
                break;
            case 9:
                x1='9';
                break;
            case 10:
                x1='A';
                break;
            case 11:
                x1='B';
                break;
            case 12:
                x1='C';
                break;
            case 13:
                x1='D';
                break;
            case 14:
                x1='E';
                break;
            case 15:
                x1='F';
                break;
            }
            x[j]=x1;
            q=j;
        }
        for(j=q; j>=0; j--)
            putchar(x[j]);
    }
    return 0;
}
