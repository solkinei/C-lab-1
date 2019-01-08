#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task2.h"

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int tmin = 0;
	int thour = 0;
	int tsec = 0;
	printf("¬ведите врем€ в форме чч:мм:сс:");
	scanf("%d:%d:%d", &thour, &tmin, &tsec);
	printf(greet(thour, tmin));
	return 0;
}
