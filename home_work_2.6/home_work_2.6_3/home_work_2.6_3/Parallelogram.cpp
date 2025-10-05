#include "Parallelogram.h"


Parallelogram::Parallelogram()
{
		sides_count = 4;
		angels_count = 4;
		name = "Параллелограмм";
		a = 20, b = 30, c = 20, d = 30;
		A = 30, B = 150, C = 30, D = 150;
}
bool Parallelogram::check()
{
	if ((a == c && b == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Parallelogram::print_info_sides_angels()
{
	std::cout << get_name() << std::endl;
	check();
	std::cout << "количество сторон: " << get_sides_count() << std::endl;
	std::cout << "стороны:";
	std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "углы:";
	std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << std::endl;
}