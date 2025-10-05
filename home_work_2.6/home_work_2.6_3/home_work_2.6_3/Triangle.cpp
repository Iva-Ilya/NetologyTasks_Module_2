#include "Triangle.h"

Triangle::Triangle()
{
	sides_count = 3;
	angels_count = 3;
	name = "Треугольник:";
	a = 10, b = 20, c = 30;
	A = 30, B = 70, C = 80;
}

bool Triangle::check() 
{
	if ((sides_count == 3) && (A + B + C == 180)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Triangle::print_info_sides_angels()
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