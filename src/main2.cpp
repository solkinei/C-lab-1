#include <stdio.h>
#include "task2.h"
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int min = 0;
	int hour = 0;
	int sec = 0;
	printf("Введите время в форме чч:мм:сс:");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf(greet(hour, min));
	return 0;
}
