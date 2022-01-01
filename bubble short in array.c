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
{for(j=0;j<n-i;j++)
{if(x[j]>x[j+1])
{x[j]=x[j]+x[j+1];
x[j+1]=x[j]-x[j+1];
x[j]=x[j]-x[j+1];
}
}
}
printf("array of bubble short \n");
for(i=0;i<n;i++)
{
	printf("%d\n",x[i]);
}
return 0;
}
