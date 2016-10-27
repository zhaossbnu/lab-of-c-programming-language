# include<stdio.h>
int main(void)
{
int i,m,n,sum;
printf("Enter m:");
scanf("%d",&m);
printf("Enter n:");
scanf("%d",&n);
sum=0;
for(i=m;i<=n;i++){
sum=sum+i;
}
printf("sum from %d to %d is %d\n",m,n,sum);
return 0;
}