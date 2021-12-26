#include<stdio.h>
int main()
{ int n,i;
printf("enter size of array=\n");
scanf("%d",&n);
int x[n],count1=0,count2=0,count3=0;
for(i=0;i<n;i++)
{
	printf("Element of array [%d]=",i);
	scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{if(x[i]>0)
 count1++;
else
 if(x[i]<0)
count2++;
else
count3++;}
printf("positive number=%d \n negative number=%d \n zero=%d",count1,count2,count3);
return 0;
}
