#include<stdio.h>
int main()
{ int row,col,x[3][3];
printf("enter number\n");
for(row=0;row<3;row++)
{ for(col=0;col<3;col++)
{
	scanf("%d",&x[row][col]);

}
}
for(row=0;row<3;row++)
{for(col=0;col<3;col++)
{ if(row==0||col==0||row==2||col==2)
 printf("%d\t",x[row][col]);
 else
 printf("\t");
}
printf("\n");
}
return 0;
}
