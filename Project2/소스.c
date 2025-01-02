#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2)
{
	double result;

	result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return result;
}

int main(void)
{
	double x1, x2, y1, y2;
	double x;

	printf("첫 번째 점의 좌표를 입력하시오: ");
	scanf("%lf %lf", &x1, &y1);

	printf("%d", 10);

	return 0;
}