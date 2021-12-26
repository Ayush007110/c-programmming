#include<stdio.h>
int main()
{ int n,i;
printf("enter size of array=");
scanf("%d",&n);
int x[n],sum=0,average;
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
printf("\n");
printf("Average of Array :\n");
for(i=0;i<n;i++)
{
	sum=sum+x[i];
	average=sum/n;
}
printf("%d",average);
return 0;
}
