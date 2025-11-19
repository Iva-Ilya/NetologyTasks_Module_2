#include "Diamond.h"
#include "check_error.h"

Diamond::Diamond()
{
	sides_count = 4;
	angles_count = 4;
	name = "Ромб";
	a = 20, b = 20, c = 20, d = 20;
	A = 0, B = 110, C = 70, D = 110;

	std::cout << get_name() << std::endl;

	if (a == b && c == d && a == d) {}
	else { throw error_message("Все стороны не равны друг другу"); }
	if (A == C && B == D) { std::cout << "Правильная" << std::endl; }
	else { throw error_message("Углы попарно не равны"); }
}
bool Diamond::check()
{
	// if ((a == b && c == d && a == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
	// else { std::cout << "Неправильная" << std::endl; return false; }
	if (a == b && c == d && a == d) {}
	else { throw error_message("Все стороны не равны друг другу"); return false; }
	if (A == C && B == D) { std::cout << "Правильная" << std::endl; return true; }
	else { throw error_message("Углы попарно не равны"); return false; }
}
void Diamond::print_info_sides_angles()
{
		//std::cout << get_name() << std::endl;
		// check();
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