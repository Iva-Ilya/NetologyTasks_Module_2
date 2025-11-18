#include <iostream>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
	if (forbidden_length == str.size())
	{
		throw  std::runtime_error{"Вы ввели слово запретной длины."};
		//throw std::string {"bad_length"};
	}
	return str.size();
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int forbidden_length{};
	std::string str{};
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	try
	{
		while (1) 
		{
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова " << "'" << str << "'" << " равна " << function(str, forbidden_length) << std::endl;
		}
	}
	catch (std::runtime_error& err)									//(std::string& bad_length)							
	{
		std::cout << err.what() <<" До свидания! " << std::endl;	// "Вы ввели слово запретной длины. До свидания!"
	}
	catch (...)
	{
		std::cout << "Error!" << std::endl;
	}

	return 0;
}