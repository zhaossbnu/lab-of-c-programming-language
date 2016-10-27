#include<stdio.h>
#include<stdlib.h>
struct number
{
    int num;
    struct number *next;
};
int main(void)
{
    int num;
    int size=sizeof(struct number);
    struct number *p,*head,*tail,*ptr,*pt;
    head=tail=NULL;
    //printf("Enter number:");
    scanf("%d",&num);
    while(num!=-1)
    {
        p=(struct number *)malloc(size);
        p->num=num;
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            tail->next=p;
        tail=p;
        scanf("%d",&num);
    }
    for(ptr=head; ptr!=NULL; ptr=ptr->next)
    {
        if(head!=NULL&&head->num%2==0)
        {
            pt=head;
            head=head->next;
            free(p);
        }
        if(ptr==NULL)
            return 0;
        if(ptr->next->num%2==0)
        {
            p=ptr->next;
            ptr->next=ptr->next->next;
            free(p);
        }
    }
    for(ptr=head; ptr!=NULL; ptr=ptr->next)
        printf("%d\n",ptr->num);
    printf("-1");
    for(ptr=head; ptr!=NULL; ptr=ptr->next)
        free(ptr);
    return 0;
}
