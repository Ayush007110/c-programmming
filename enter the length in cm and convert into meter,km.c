#include<stdio.h>
int main()
{
	float cm,meter,km;
	scanf("%f",&cm);
	meter=cm/100.0;
	km=cm/100000.0;
	printf("length in cm\t=\t%f,\nlength in meter\t=\t%f,\nlength in km\t=\t%f",cm,meter,km);
	return 0;
}
