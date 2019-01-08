#define _CRT_SECURE_NO_WARNINGS

#include "task3.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	char buf[128];
	double angle;
	char type;
	type = 'D';
	type = 'R';

	printf("¬ведите угол в градусах __.__D или радианах __.__R: \n");
	scanf("%lf%c", &angle, &type);
	convert(buf, angle, type);
	puts(buf);

	return 0;
}