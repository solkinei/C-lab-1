#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task1.h"

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	char gender = 0;
	float height = 0;
	float weight = 0;

	printf("”кажите ваш пол (м или ж): ");
	scanf("%c", &gender);
	printf("”кажите ваш рост в см: ");
	scanf("%f", &height);
	printf("”кажите ваш вес в кг: ");
	scanf("%f", &weight);

	int result = getRecommendation(gender, height, weight);
	if (result == 1)
		printf("¬ам нужно сбросить вес!\n");
	else if (result == 0)
		printf("¬аш вес нормальный!\n");
	else if (result == -1)
		printf("¬ам нужно набрать весь!\n");
	return 0;
}