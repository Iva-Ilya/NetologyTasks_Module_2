#include "Square.h"
#include "check_error.h"

Square::Square()
{
	sides_count = 4;
	angles_count = 4;
	name = "Квадрат";
	a = 10, b = 10, c = 10, d = 10;
	A = 90, B = 90, C = 90, D = 90;
}
bool Square::check()
{
	/*if ((a == b && c == d && a == d ) && (A && B && C && D == 90)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }*/
	if (a == c && b == d && a == d) {}
	else { throw error_message("Все стороны не равны друг другу"); return false; }
	if (A == 90 && B == 90 && C == 90 && D == 90) { std::cout << "Правильная" << std::endl; return true; }
	else { throw error_message("Не все уголы равны 90 градусов"); return false; }
}
void Square::print_info_sides_angles()
{
	try
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
	catch (const error_message& error)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
		std::cout << std::endl;
	}
}