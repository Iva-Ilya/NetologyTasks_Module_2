#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle()
{
	sides_count = 3;
	angles_count = 3;
	name = "Равносторонний треугольник";
	a = 10, b = 10, c = 10;
	A = 60, B = 60, C = 60;
}

bool Equilateral_triangle::check()
{
	if (a == b && a == c && A == B && A == C) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Equilateral_triangle::print_info_sides_angles()
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