
// Обработка ошибок и исключений




// 1-й пример - деление на ноль.
/*
#include <iostream>

int divide(int first, int second)
{
	return first / second ; //Error
}


int main()
{
	int firstValue{ 5.6f };
	int secondValue{ 0.0f };
	std::cout << firstValue << " / " << secondValue << " = " << divide(firstValue, secondValue) << std::endl;

	return 0;
}
*/

// 2-й пример - использовать макрос для хранения его вызова при ошибке.
/*
#include <iostream>

#define FLOAT_ERROR_CODE -999.999f
float divide(float first, float second)
{
	if (second == 0.0f) { return FLOAT_ERROR_CODE; }
	return first / second; //Error
}


int main()
{
	float firstValue{ 5.6f };
	float secondValue{ 0.0f };
	std::cout << firstValue << " / " << secondValue << " = " << divide(firstValue, secondValue) << std::endl;

	return 0;
}
*/

// 3-й пример - тип выполняемой фукнции сделать bool - для проверки внутри нее наличие/отсутствие ошибки.
/*
#include <iostream>

bool divide(float first, float second, float& third)
{
	if (second == 0.0f) { return false; }
	third = first / second; //Error
	return true;
}


int main()
{
	float firstValue{ 5.6f };
	float secondValue{ 0.0f };
	float thirdValue{ 0.0f };
	
	bool result = divide(firstValue, secondValue, thirdValue);
	if (!result) { std::cout << "You entered 0 as second value!" << std::endl; }

	std::cout << firstValue << " / " << secondValue << " = " << thirdValue << std::endl;

	return 0;
}
*/

// 4-й пример - перечисления
/*
#include <iostream>

enum class DivisionErrors : int			// int - иногда перечесление может содержать внутри себя char
{
	Success = 0,
	DivisionByZero = 1,
	ArgumentIsNullPointer = 2
};

DivisionErrors divide(float first, float second, float* third)
{
	if (second == 0.0f) { return DivisionErrors::DivisionByZero; }
	else if (third == nullptr) { return DivisionErrors::ArgumentIsNullPointer; }

	*third = first / second ;
	return DivisionErrors::Success;
}

int main()
{
	float firstValue{ 5.6f };
	float secondValue{ 0.0f };
	float thirdValue{ 0.0f };

	DivisionErrors result = divide(firstValue, secondValue, &thirdValue);
	if (result == DivisionErrors::Success) { std::cout << firstValue << " / " << secondValue << " = " << thirdValue << std::endl; }
	else if (result == DivisionErrors::DivisionByZero) { std::cout << "Error: division by zero!" << std::endl; }
	else if (result == DivisionErrors::ArgumentIsNullPointer) { std::cout << "Error: argument's pointer is invalid!!" << std::endl; }
	else { std::cout << "Error: unknonw!" << std::endl; }

	return 0;
}
*/

// 5-й пример - Исключения. Операторы try --> throw --> catch. Работа переменных, отвечающих за ошибки.
/**/
#include <iostream>


void function1() { throw 666; }

int main()
{
	try
	{
		function1();
	}
	catch (double d)
	{
		std::cerr << "Exception of type double: " << d << std::endl;
	}
	catch (int i)
	{
		std::cerr << "Exception of type int: " << i << std::endl;
	}
	/*catch (...)
	{
		std::cerr << "unknown exception" << std::endl;
	}*/

	std::cout << "The End..." << std::endl;

	return 0;
}
/**/

// 6-й - Исключения. Операторы try --> throw --> catch. Работа обектов (классов), отвечающих за ошибки.
/*
#include <iostream>
#include <exception>		//std::exception
#include <stdexcept>		//std::runtime_error


int main()
{
	try
	{
		throw std::runtime_error("Runtime Error Random Text Here!");						//runtime_error - наследник базовго класса exception. Текст в скобках - хранится и ввыводится при выводе ошибки.
	}
	// This handler will catch std::exception and all the derived exceptions too.
	catch (const std::runtime_error& exception)												// более точечный поиск ошибки по конкретному экземпляру класса runtine_error.
	{
		std::cerr << "Runtime_error exception occurred: " << exception.what() << std::endl; // метод what() - виртуальный метод базового класса exception, который выводит ранее заданный текс ошибки.
	}
	catch (const std::exception& exception)													// exception - базовый класс, наследником которго является runtime_error.
	{
		std::cerr << "Exception occurred: " << exception.what() << std::endl;
	}
	catch (...)																				// Выводится, когда ничего не было найдено выше.
	{
		std::cerr << "Unknown error!" << std::endl;
	}

	return 0;
}
*/
