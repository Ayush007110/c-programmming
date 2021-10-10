#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	scanf("%f",&fahrenheit),
	celsius=(fahrenheit-32)*5/9;
	printf("Enter the temperature in fahrenheit=%f\n",fahrenheit);
	printf("%ffahrenheit=%fcalcius",fahrenheit,celsius);
	return 0;
}
