#include<stdio.h>
int main()
{
	int n,i,trump=0,Biden=0;
	printf("Enter the number of states ");
	scanf("%d",&n);   //suppose x=trump and y=biden;
	int x[n];
	int y[n];
	printf("Enter the votes of trumph in 10 states ");
	for(i=0;i<=n-1;i++)
{
	scanf("%d",&x[i]);
	trump=trump+ x[i];
}
printf("Enter the votes to Biden in 10 states");
for(i=0;i<n-1;i++)
{

	scanf("%d",&y[i]);
	Biden=Biden+y[i];
}
for(i=0;i<=n-1;i++)
{

if(x[i]>y[i])
{
	printf("Trump is winner =%d\n",x[i]);
}
else
{
	printf("Biden is winner=%d\n",y[i]);
}
}

	if(trump>Biden)
{ 
	printf("the trump is winner  and total vote of trump =%d\n",trump);
	printf("The overall winner is trump");
}
if(Biden>trump)
{

printf("the biden is winner and total vote of bidden = %d\n",Biden);
printf("the overall winner is Bidden");
}

return 0 ;
}
   
