#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double y = 4.30;
	double z = 6.25;
	double sum= 0;
	scanf("%lf %lf", &y, &z);
	sum = y + z;
	printf("sum=%lf\n",sum);

	return 0;
}