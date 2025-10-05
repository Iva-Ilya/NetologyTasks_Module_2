#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle()
{
	sides_count = 3;
	angels_count = 3;
	name = "Равнобедренный треугольник";
	a = 10, b = 20, c = 10;
	A = 45, B = 90, C = 45;
}

bool Isosceles_triangle::check()
{
	if ((a == c) && (A == C)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Isosceles_triangle::print_info_sides_angels()
{
	std::cout << get_name() << std::endl;
	check();
	std::cout << "Количество сторон: " << get_sides_count() << std::endl;
	std::cout << "Стороны:";
	std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы:";
	std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
	std::cout << std::endl;
}