#include<stdio.h>
int main()
{ int n,i;
printf("enter size of array\n");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
printf("\n Element of array\n");
for(i=0;i<n;i++)
{
	printf("%d\n",x[i]);
}
return 0;
}
