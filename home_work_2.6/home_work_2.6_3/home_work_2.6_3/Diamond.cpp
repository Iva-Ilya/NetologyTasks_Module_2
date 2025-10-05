#include "Diamond.h"

Diamond::Diamond()
{
	sides_count = 4;
	angels_count = 4;
	name = "Ромб";
	a = 10, b = 10, c = 10, d = 10;
	A = 70, B = 110, C = 70, D = 110;
}
bool Diamond::check()
{
	if ((a == b && c == d && a == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Diamond::print_info_sides_angels()
{
	std::cout << get_name() << std::endl;
	check();
	std::cout << "Количество сторон: " << get_sides_count() << std::endl;
	std::cout << "Стороны:";
	std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы:";
	std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	std::cout << std::endl;
}