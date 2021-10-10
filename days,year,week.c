#include<stdio.h>
int main()
{
	int days,years,weeks;
	scanf("%d",&days);
	years=(days/365);
	weeks=(days % 365)/7;
	days=days-((years*365)+(weeks*7)); // or days=(days % 365)%7;
	printf("Years=%d\nweeks=%d\nDays=%d",days,years,weeks);
	return 0;
}
