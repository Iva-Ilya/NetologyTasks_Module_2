#include "Parallelogram.h"
#include "check_error.h"


Parallelogram::Parallelogram()
{
		sides_count = 4;
		angles_count = 4;
		name = "Параллелограмм";
		a = 2, b = 30, c = 20, d = 30;
		A = 30, B = 150, C = 30, D = 150;

		std::cout << get_name() << std::endl;

		if (a == c && b == d) {}
		else { throw error_message("Стороны попарно не равны");  }
		if (A == C && B == D) { std::cout << "Правильная" << std::endl;  }
		else { throw error_message("Углы попарно не равны");  }
}
bool Parallelogram::check()
{
	/*if ((a == c && b == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }*/
	if (a == c && b == d) {}
	else { throw error_message("Стороны попарно не равны"); return false; }
	if (A == C && B == D) { std::cout << "Правильная" << std::endl; return true; }
	else { throw error_message("Углы попарно не равны"); return false; }
}
void Parallelogram::print_info_sides_angles()
{
		//std::cout << get_name() << std::endl;
		//check();
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	/*catch (const error_message& error)
	{
		std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl;
		std::cout << std::endl;
	}*/
}