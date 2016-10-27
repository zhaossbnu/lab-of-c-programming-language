#include<stdio.h>
int main(void)
{
    char choice;
    printf("Choices are A B C D E .\n");
    printf("Enter choice:");
    scanf("%c",&choice);
    switch(choice)
    {
    case'A':
        printf("A(90~100)\n");
        break;
    case'B':
        printf("B(80~89)\n");
        break;
    case'C':
        printf("C(70~79)\n");
        break;
    case'D':
        printf("D(60~69)\n");
        break;
    case'E':
        printf("E(0~59)\n");
        break;
    default:
        printf("NO\n");
        break;
    }
    return 0;
}
