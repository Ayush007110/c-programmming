#include<stdio.h>
int main()
{int n,i,j;
printf("enter size of array=");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
for(i=0;i<n-1;i++)
{for(j=i+1;j<n;j++)
{if(x[i]>x[j])
{x[i]=x[i]+x[j];
 x[j]=x[i]-x[j];
 x[i]=x[i]-x[j];
}
}
}
printf("Array of selection short\n");
for(i=0;i<n;i++)
{
	printf("%d\n",x[i]);
}
return 0;
}
