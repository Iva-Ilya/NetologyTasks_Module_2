#include "math_func_power.h"

double power(double num1, double num2)
{
	double result = num1;
	for (int i = 1; i < num2; i++)
	{
		result = result * num1;
	}
	return result;
}