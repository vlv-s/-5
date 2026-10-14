#include <stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _USE_MATH_DEFINES
int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, t, F;
	t = 0.5;
	printf("Введите значение x:");
	if (scanf_s("%lf", &x) != 1) return 1;
	printf("Введите значение y:");
	if (scanf_s("%lf", &y) != 1) return 1;
	if ((2.0 * y + 3.0 * x) <= 0)
	{
		printf("Ошибка: аргумент логарифма должен быть больше 0.\n");
		return 1;
	}
	if (x < 0)
	{
		printf("Ошибка: подкоренное выражениене может быть больше 0.\n");
		return 1;
	}
	if ((pow(t, t) + sqrt(x)) == 0)
	{
		printf("Ошибка деления на ноль.\n");
		return 1;
	}
	double numerator = pow(sin(x), 3) + log(2.0 * y + 3.0 * x);
	double denominator = pow(t, t) + sqrt(x);
	F = numerator / denominator;
	printf("F(%.2f,%.2f)=%.6f\n", x, y, F);
	return 0;
}