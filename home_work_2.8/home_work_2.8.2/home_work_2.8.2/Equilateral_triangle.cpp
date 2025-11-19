#include "Equilateral_triangle.h"
#include "check_error.h"

Equilateral_triangle::Equilateral_triangle()
{
	sides_count = 3;
	angles_count = 3;
	name = "Равносторонний треугольник";
	a = 0, b = 10, c = 10;
	A = 6, B = 60, C = 60;

	std::cout << get_name() << std::endl;

	if (a == b && a == c) {}
	else { throw error_message("Все стороны не равны друг другу"); }
	if (A == B && A == C) { std::cout << "Правильная" << std::endl; }
	else { throw error_message("Все углы не равны друг другу"); }
}

bool Equilateral_triangle::check()
{
	/*if (a == b && a == c && A == B && A == C) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }*/
	if (a == b && a == c) {}
	else { throw error_message("Все стороны не равны друг другу"); return false; }
	if (A == B && A == C) { std::cout << "Правильная" << std::endl; return true; }
	else { throw error_message("Все углы не равны друг другу"); return false; }
}
void Equilateral_triangle::print_info_sides_angles()
{
		//std::cout << get_name() << std::endl;
		//check();
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;

	/*catch (const error_message& error)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
		std::cout << std::endl;
	}*/
}