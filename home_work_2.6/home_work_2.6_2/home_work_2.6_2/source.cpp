#include <iostream>
#include <Windows.h>
#include "class_counter.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string init_state;
	int value_init_state = 0;
	char any_operation = '0';
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> init_state;
	Counter* _count;

	if (init_state == "да" || init_state == "Да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> value_init_state;
		_count = new Counter(value_init_state);
	}
	else
	{
		_count = new Counter();
	}
	
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'):";
		std::cin >> any_operation;
		if (any_operation == '+') { _count->up(); }

		else if (any_operation == '-') { _count->down(); }

		else if (any_operation == '=') { _count->get_state(); }

		else if (any_operation == 'x') { break; }

		else if (any_operation == 'х') { break; }
	}
	std::cout << "До свидания!" << std::endl;

	delete _count;

}

