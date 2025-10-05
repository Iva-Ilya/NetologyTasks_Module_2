#include <iostream>
#include <cmath>

class Parent
{
public:
	// Ќапример измен€етс€ количество входных параметров дл€ одного и того же конструктора
	// ѕример ниже - рабочий, но не оптимальный
	/*Parent(int a, int b, int c, int d)		
	{
		sum = a + b + c + d;
		std::cout << sum << std::endl;
		sum2 = sum * sum;
	}
	Parent(int a, int b, int c)
	{
		sum = a + b + c;
		std::cout << sum << std::endl;
		sum2 = sum * sum;
	}
	Parent(int a, int b)
	{
		sum = a + b;
		std::cout << sum << std::endl;
		sum2 = sum * sum;
	}*/

	// ќптимальный пример - наседование 1 конструктора с самым большим числом параметров
	Parent(int a, int b, int c, int d)
	{
		sum = a + b + c + d;
		std::cout << sum << std::endl;
		sum2 = sum * sum;
	}
	Parent(int a, int b, int c) :Parent(a, b, c, 0)
	{

	}
	Parent(int a, int b) :Parent(a, b, 0)
	{

	}
private:
	int sum;
	int sum2;
};



// ћножественна€ наследованность. Ћишнее повторение кода, трудно определить базовый класс, из которого все наследуют. 
class A {};

class B: public A{};

class C: public A{};

class D: public B, public C{};

/* ћожно использовать класс virtual
class A {};

class B: public virtual A{};

class C: public virtual A{};

class D: public A, public B, public C{};
*/


// ≈сли применить sizeof к пустому классу и вывести на экран, то выведетс€ 1 байт.
// ѕочему именно 1 байт?
// ≈сли в массиве все элементы будут занимать 0 байт, то адреса в пам€ти будут иметь 1 адрес - как их разделить?
// ѕоэтому каждый класс (если он пустой), смещен в пам€ти на 1 байт, поэтому при выводе sizeof дл€ пустого класса будем видеть 1.








int main()
{








}