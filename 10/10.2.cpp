#include<stdio.h>
struct name_price
{
    char name[20];
    double price;
};
int main(void)
{
    struct name_price a[10];
    int n,i,j=0,k=0;
    char b[10];
    //printf("Enter n(n<10):");
    scanf("%d",&n);
    gets(b);
    for(i=0; i<n; i++)
    {
        //printf("Enter name and price:");
        gets(a[i].name);
        scanf("%lf",&a[i].price);
        gets(b);
    }
    for(i=0; i<n; i++)
    {
        if(a[i].price>a[j].price) j=i;
        if(a[i].price<a[k].price)  k=i;
    }
    printf("%s\t%.2lf\n",a[j].name,a[j].price);
    printf("%s\t%.2lf\n",a[k].name,a[k].price);
    return 0;
}
