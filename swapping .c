#include<stdio.h>
int main()
{int x,y;
scanf("%d%d",&x,&y);
x=x+y;
y=x-y;
x=x-y;
printf("the value after swapping x=%d and y=%d",x,y);
return 0;
}
