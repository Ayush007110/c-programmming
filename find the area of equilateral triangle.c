#include<stdio.h>
#include<math.h>
int main()
{
	float side,area;
	printf("Enter the side of Equilateral triangle:");
	scanf("%f",&side);
	area=(sqrt(3)/4)*(side*side);
	printf("area of equilateral triangle=%f sq. unit",area);
	return 0;
}
