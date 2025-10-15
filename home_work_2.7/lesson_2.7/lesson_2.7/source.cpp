#include <iostream>

//#pragma once --> имеет баг, поэтому лучше использовать защитник файла:
// #ifndef __наименование заголовочного файла .h__
// #define __наименование заголовочного файла .h__
// Code ...
// #endif


// Макрос SWAP. Знак обратный слеш "\" --> перенос на другу строку. Все переменные, подставляемые в макрос --> выделять все в кргулые скобки.
#define SWAP(type, first, second) \
type temporary = (first); \
(first) = (second); \
(second) = temporary;




#define WINDOWS_64


void myFunction();

int main()
{
	// В шестандцатичерной системе исчисления
	// 0 1 2 3 4 5 6 7 8 9 A B C D E F
	// 0x00 (0) -- 0xFF (255) --> 1 byte
	


#ifdef WINDOWS_64
	std::cout << "OS: Windows_x64" << std::endl;
#endif

#ifdef WINDOWS_86
	std::cout << "OS: Windows_x86" << std::endl;
#endif

	std::cout << std::endl;
	myFunction();

	std::cout << std::endl;
	int variable1 = 3;
	int variable2 = 7;
	std::cout << "Variable1: " << variable1 << std::endl;
	std::cout << "Variable2: " << variable2 << std::endl;

	SWAP(int, variable1, variable2);
	// Подставляется код макроса сюда

	std::cout << "Variable1: " << variable1 << std::endl;
	std::cout << "Variable2: " << variable2 << std::endl;


	return 0;
}

void myFunction()
{
	std::cout << "Current file:			" << __FILE__ << std::endl;
	std::cout << "Current line:			" << __LINE__ << std::endl;
	std::cout << "Current time:			" << __TIME__ << std::endl;
	std::cout << "Current function:		" << __func__ << std::endl;
}