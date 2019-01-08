const char* greet(int thour, int tmin)

{
	if (thour >= 0 && thour < 6)
		return "Доброй ночи!";
	else if (thour >= 6 && thour < 12)
		return "Доброе утро!";
	else if (thour >= 12 && thour < 18)
		return "Добрый день!";
	else if (thour >= 18 && thour < 24)
		return "Добрый вечер!";
	else
		return "Неправильное время!";
}