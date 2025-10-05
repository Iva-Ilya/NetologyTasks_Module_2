#include "Quadrangle.h"


Quadrangle::Quadrangle()
	{
		sides_count = 4;
		angels_count = 4;
		name = "Четырехугольник:";
		a = 10, b = 20, c = 30, d = 40;
		A = 50, B = 130, C = 70, D = 110;
	}
	bool Quadrangle::check()
	{
		if ((sides_count == 4) && (A + B + C + D == 360)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void Quadrangle::print_info_sides_angels()
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
