#include<stdio.h>
int main()
{int n,i,position,value;
printf("enter size of array=");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
printf("\n");
printf("enter position=");
scanf("%d",&position);
for(i=position-1;i<n-1;i++)
{
	x[i]=x[i+1];
}
printf("the updated array\n");
for(i=0;i<n-1;i++)
{
	printf("%d\n",x[i]);
}
return 0;
}
