#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char  num[20];
    char name[100];
    int score;
    struct student *next;
};
int main(void)
{
    struct student *head,*tail,*p,*ptr;
    char name[100],num[20];
    int score,x;
    head=tail=NULL;
    //printf("Enter num name score:");
    scanf("%s",num);
    while(num[0]!='0')
    {
        scanf("%s%d",name,&score);
        p=(struct student *)malloc(sizeof(struct student));
        strcpy(p->num,num);
        strcpy(p->name,name);
        p->score=score;
        p->next=NULL;
        if(head == NULL)
            head = p;
        else
            tail->next = p;
        tail = p;
        scanf("%s",num);
    }
    //printf("Enter x:");
    scanf("%d",&x);
    for(ptr=head; ptr!=NULL; ptr=ptr->next)
    {
        if(ptr->score>=x) printf("%s\n%s\n%d\n",ptr->num,ptr->name,ptr->score);
    }

    return 0;
}
