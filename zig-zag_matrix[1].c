#include<stdio.h>
int main()
{ int row,col,x[3][3];
printf("enter number of matrix\n");
for(row=0;row<3;row++)
{for(col=0;col<3;col++)
{
	printf("element of  [%d],[%d]=",row,col);
	scanf("%d",&x[row][col]);
}
}
printf("the matrix is\n");
for(row=0;row<3;row++)
{if(row%2==0)
{for(col=0;col<3;col++)
{
	printf("%d\t",x[row][col]);
}
}
else
{for(col=2;col>=0;col--)
{
	printf("%d\t",x[row][col]);
}
}
printf("\n");
}
return 0;
}


