#include<stdio.h>
int main()
{
int x,y,sum,multiply,divide,sub,mod;
scanf("%d%d",&x,&y);
sum=x+y;
multiply=x*y;
divide=x/y;
sub=x-y;
mod=x%y;
printf("%d%d\n",x,y);
printf("%d\n",sum);
printf("%d\n",multiply);
printf("%d\n",divide);
printf("%d\n",sub);
printf("%d\n",mod);
return 0;
}
