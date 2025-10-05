#include "Figure.h"


Figure::Figure()
{
	sides_count = 0;
	angles_count = 0;
	name = "Фигура:";
	a = 0, b = 0, c = 0;
	A = 0, B = 0, C = 0;
}
std::string Figure::get_name() { return name; }
int Figure::get_sides_count() { return sides_count; }
int Figure::get_angles_count() { return angles_count; }

bool Figure::check()
{
	if (sides_count == 0) { std::cout << "Правильная" << std::endl; return true; }
	else { std::cout << "Неправильная" << std::endl; return false; }
}
void Figure::print_info_sides_angles()
{
	std::cout << get_name() << std::endl;
	check();
	std::cout << "Количество сторон: " << get_sides_count() << std::endl;
	std::cout << std::endl;
}