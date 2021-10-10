#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	scanf("%d%d",&angle1,&angle2);
	angle3=180-(angle1+angle2);
	printf("enter the angle of first side\t=\t%d\nenter the second side of trangle=\t%d\nthen the third side of triangle=\t%d",angle1,angle2,angle3);
	return 0;
}
