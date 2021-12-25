#include<stdio.h>
int main()
{int n,i;
printf("enter number\n");
scanf("%d",&n);
int x[n],max,min;
for(i=0;i<n;i++)
{
	printf("Element of [%d]=",i);
	scanf("%d",&x[i]);
}
max=x[0];
for(i=0;i<n;i++)
{if(max<x[i])
 max=x[i];
}
printf("maximum number=%d",max);
printf("\n minimum number=");
min=x[0];
for(i=0;i<n;i++)
{if(min>x[i])
min=x[i];
}
printf("%d",min);
printf("\nAfter swapp the max and min value\n");
max=max+min;
min=max-min;
max=max-min;
printf("max number=%d\nmin number=%d",max,min);
printf("\nAfter swapping max and min number of array\n");
for(i=0;i<n;i++)
{if(x[i]==max)
{ x[i]=min;
printf("%d\n",x[i]);
}
else if(x[i]==min)
{  x[i]=max;
printf("%d\n",x[i]);
}
else
printf("%d\n",x[i]);
}
return 0;
}
