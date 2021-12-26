#include<stdio.h>
int main()
{ int n;
printf("enter size of array=");
scanf("%d",&n);
int row,col,x[n][n],y[n][n],z[n][n];
for(row=0;row<n;row++)
{for(col=0;col<n;col++)
{
	printf("element of [%d],[%d]=",row,col);
	scanf("%d",&x[row][col]);
}
}
printf("the matrix is\n");
for(row=0;row<n;row++)
{for(col=0;col<n;col++)
{
	printf("%d\t",x[row][col]);
}
printf("\n");
}
printf("\nenter number of second matrix=\n");
scanf("%d",&n);
for(row=0;row<n;row++)
{for(col=0;col<n;col++)
{
	printf("enter array [%d],[%d]=",row,col);
	scanf("%d",&y[row][col]);
}
}
for(row=0;row<n;row++)
{ for(col=0;col<n;col++)
{
	printf("%d\t",x[row][col]);
}
printf("\n");
}
printf("\naddition of two matrix\n");
for(row=0;row<n;row++)
{for(col=0;col<n;col++)
{
	z[row][col]=x[row][col]+y[row][col];
printf("%d\t",z[row][col]);
}
printf("\n");
}

  return 0;
  
}
