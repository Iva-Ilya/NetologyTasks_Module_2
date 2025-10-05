#include <iostream>
#include <Windows.h>
#include "math_func_sum.h"
#include "math_func_substract.h"
#include "math_func_multiply.h"
#include "math_func_divide.h"
#include "math_func_power.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double num1, num2, any_operation;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	while (true)
	{
		std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> any_operation;
		if (any_operation == 1) { std::cout << "Результат сложения: " << add(num1, num2) << std::endl; }
		else if (any_operation == 2) { std::cout << "Результат разности: " << substract(num1, num2) << std::endl; }
		else if (any_operation == 3) { std::cout << "Результат умножения: " << multiply(num1, num2) << std::endl; }
		else if (any_operation == 4) { std::cout << "Результат деления: " << divide(num1, num2) << std::endl; }
		else if (any_operation == 5) { std::cout << "Результат вовзедения в степень: " << power(num1, num2) << std::endl; }
		else { break; }
	}
	
}