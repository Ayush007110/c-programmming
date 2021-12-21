#include<stdio.h>
int main()
{ int row,col,x[3][3],sum=0;
for(row=0;row<3;row++)
{ for(col=0;col<3;col++)
{
	scanf("%d",&x[row][col]);
}
}
for(row=0;row<3;row++)
{
for(col=0;col<3;col++)
{
	if(row==col)
	sum+=x[row][col];
}

}
printf("%d",sum);
return 0;
}
