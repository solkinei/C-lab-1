#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int feet = 0;
	int inches = 0;

	printf("¬ведите число футов и дюймов в формате: фут'дюйм\n");
	scanf("%d,%d", &feet, &inches);
	printf("%.2f cm", convert(feet, inches));


	return 0;
}