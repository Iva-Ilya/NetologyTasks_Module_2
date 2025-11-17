#include <iostream>
#include <Windows.h>

/*
// 3 типа перегрузки:
// 1. Перегрузка через метод класса.
class ComplexNumber
{
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond): first{setFirst}, second{setSecond}
	{}
	void printComplexNumber() 
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}
	ComplexNumber operator+(const ComplexNumber& complexNumber)
	{
		return ComplexNumber(this -> first + complexNumber.first, this -> second + complexNumber.second);
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	cn1.printComplexNumber();
	ComplexNumber cn2(4, 4);
	cn2.printComplexNumber();
	std::cout << std::endl;
	ComplexNumber cn3(cn1 + cn2);
	cn3.printComplexNumber();

	(cn1 + cn2).printComplexNumber();
	(cn1.operator+(cn2)).printComplexNumber();
	std::cout << std::endl;

	
	// 2. Перегрузка через функцию.
	// 3. Перегрузка через дружественную функцию.








	return 0;
}
*/

/*
// 2. Перегрузка через функцию.
class ComplexNumber
{
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond): first{setFirst}, second{setSecond}
	{}
	int getFirst() const { return first; }
	int getSecond() const { return second; }
	void printComplexNumber()
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}
};

ComplexNumber operator+(const ComplexNumber& cn1, const ComplexNumber& cn2)
{
	return ComplexNumber(cn1.getFirst() + cn2.getFirst(), cn1.getSecond() + cn2.getSecond());
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	ComplexNumber cn2(4, 4);
	
	operator+(cn1, cn2).printComplexNumber();
	std::cout << std::endl;

	// 3. Перегрузка через дружественную функцию.

	return 0;
}
*/

/*
// 3. Перегрузка через дружественную функцию.
class ComplexNumber
{
	friend ComplexNumber operator+(const ComplexNumber& cn1, const ComplexNumber& cn2)
	{
		return ComplexNumber(cn1.first + cn2.first, cn1.second + cn2.second);
	}
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond): first{setFirst}, second{setSecond}
	{}
	
	void printComplexNumber()
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	ComplexNumber cn2(4, 4);

	operator+(cn1, cn2).printComplexNumber();
	std::cout << std::endl;


	return 0;
}
*/

/*
// Перегзрузка операторов сравнения
class ComplexNumber
{
	friend bool operator==(const ComplexNumber& cn1, const ComplexNumber& cn2)
	{
		return (cn1.first == cn2.first && cn1.second == cn2.second);
	}
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond): first{setFirst}, second{setSecond}
	{}

	void printComplexNumber()
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	ComplexNumber cn2(4, 4);

	bool result(cn1 == cn2);
	std::cout << std::boolalpha << " cn1 == cn2? \t" << result << std::endl;
	std::cout << std::endl;


	return 0;
}
*/

/*
// Перегрузка оператора присваивания.
class ComplexNumber
{
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond) : first{ setFirst }, second{ setSecond }
	{}
	
	ComplexNumber& operator=( const ComplexNumber& cn2 )
	{
		if (this == &cn2) { return *this; }
		this->first = cn2.first;
		this->second = cn2.second;
		return *this;

	}
	void printComplexNumber()
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	ComplexNumber cn2(4, 4);
	ComplexNumber cn3(6, 6);

	cn1 = cn2 = cn3;

	cn1.printComplexNumber();
	cn2.printComplexNumber();
	cn3.printComplexNumber();
	std::cout << std::endl;

	return 0;
}
*/


//
// Перегрузка оператора смены знака.
class ComplexNumber
{
private:
	int first{};
	int second{};

public:
	ComplexNumber(int setFirst, int setSecond) : first{ setFirst }, second{ setSecond }
	{}

	void printComplexNumber()
	{
		std::cout << "First: " << first << "\tSecond: " << second << std::endl;
	}

	ComplexNumber& operator-()																			// Можно возвращать ссылку или полноценную копию - по ситуации!!!
	{
		first = -first;
		second = -second;
		return *this;

		/*first *= -1;																					// Можно и так сделать.
		second *= -1;
		return *this;*/

		//return ComplexNumber{ -first, -second };														// Вызов конструктора с новыми параметрами.
	}
	//Или задать функцию типа void
	/*void operator-()
	{
		first = -first;
		second = -second;
	}*/
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	ComplexNumber cn1(1, 1);
	ComplexNumber cn2(4, 4);
	ComplexNumber cn3(6, 6);

	cn1.printComplexNumber();
	std::cout << std::endl;
	(-cn1).printComplexNumber();
	std::cout << std::endl;
	cn2.printComplexNumber();
	std::cout << std::endl;
	(-cn2).printComplexNumber();
	std::cout << std::endl;
	cn3.printComplexNumber();
	std::cout << std::endl;
	(-cn3).printComplexNumber();
	std::cout << std::endl;

	return 0;
}
//

