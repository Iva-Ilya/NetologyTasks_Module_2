#include "Rectangle_triangle.h"
#include "check_error.h"

Rectangle_triangle::Rectangle_triangle()
{
	sides_count = 3;
	angles_count = 3;
	name = "Прямоугольный треугольник";
	a = 30, b = 40, c = 50;
	A = 30, B = 60, C = 9;

	std::cout << get_name() << std::endl;

	if (sides_count == 3) {}
	else { throw error_message("Число сторон не равно 3");  }
	if (C == 90) { std::cout << "Правильная" << std::endl;  }
	else { throw error_message("Угол С не равен 90 градусов");  }
}

bool Rectangle_triangle::check()
{
	/*if ((sides_count == 3) && (C == 90)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }*/
	if (sides_count == 3) {}
	else { throw error_message("Число сторон не равно 3"); return false; }
	if (C == 90) { std::cout << "Правильная" << std::endl; return true; }
	else { throw error_message("Угол С не равен 90 градусов"); return false; }
}
void Rectangle_triangle::print_info_sides_angles()
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