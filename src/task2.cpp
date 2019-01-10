const char* greet(int hour, int min)
{
	if (hour >= 0 && hour < 6)
		return "Доброй ночи!";
	else if (hour >= 6 && hour < 12)
		return "Доброе утро!";
	else if (hour >= 12 && hour < 18)
		return "Добрый день!";
	else if (hour >= 18 && hour < 24)
		return "Добрый вечер!";
	else
		return "Неправильное время!";
}
