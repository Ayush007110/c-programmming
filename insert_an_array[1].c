#include<stdio.h>
int main()
{int n,i,number,position;
printf("enter size of array=");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
printf("\n");
printf("enter location =");
scanf("%d",&position);
printf("\nenter number=");
scanf("%d",&number);
for(i=n-1;i>=position-1;i--)
{
	x[i+1]=x[i];}
x[position-1]=number;
printf("the updated array\n");
for(i=0;i<=n;i++)
{
	printf("%d",x[i]); 
}
return 0;
}
