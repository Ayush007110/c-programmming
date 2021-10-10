#include<stdio.h>
int main()
{
	float length,breadth,perimeter;
	scanf("%f%f",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("%f,%f\n",length,breadth);
	printf("%f",perimeter);
	return 0;
