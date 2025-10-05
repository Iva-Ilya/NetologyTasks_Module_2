#include "Rectangle_triangle.h"

Rectangle_triangle::Rectangle_triangle()
{
	sides_count = 3;
	angels_count = 3;
	name = "Прямоугольный треугольник";
	a = 30, b = 40, c = 50;
	A = 30, B = 60, C = 90;
}

bool Rectangle_triangle::check()
{
	if ((sides_count == 3) && (C == 90)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Rectangle_triangle::print_info_sides_angels()
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