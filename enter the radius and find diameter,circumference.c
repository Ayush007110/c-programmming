#include<stdio.h>
int main()
{
	float radius,diameter,circumference,area; ///circle
    const float pi=3.14;
	scanf("%f",&radius);
	diameter=2*radius;
	circumference=2*pi*radius;
	area=pi*radius*radius;
	printf("%f\n%f\n%f\n%f",radius,diameter,circumference,area);
	return 0;
}
