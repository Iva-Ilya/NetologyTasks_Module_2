#include <iostream>
#include <Windows.h>

#define MODE 3

void add(int num1, int num2);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#ifndef MODE 
#error "Define MODE"
#endif

#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int num1{}, num2{};
	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 2: ";
	std::cin >> num2;
	add(num1, num2);
#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif

	return 0;
}



void add(int num1, int num2)
{
	std::cout << "Результат сложения: " << num1 + num2 << std::endl;
}