#include <iostream>
#include <Windows.h>

class Figure
{
protected:
	int sides_count, angles_count;
	std::string name;
	int a, b, c, d, A, B, C, D;
public:
	Figure()
	{
		sides_count = 0;
		angles_count = 0;
		name = "Фигура:";
		a = 0, b = 0, c = 0;
		A = 0, B = 0, C = 0;
	}
	std::string get_name() { return name; }
	int get_sides_count() { return sides_count; }
	int get_angles_count() { return angles_count; }

	virtual bool check()
	{
		if (sides_count == 0) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	virtual void print_info_sides_angles()
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		check();
		std::cout << std::endl;
	}
	
};


class Triangle : public Figure
{
public:
	Triangle()
	{
		sides_count = 3;
		angles_count = 3;
		name = "Треугольник:";
		a = 10, b = 20, c = 30;
		A = 30, B = 70, C = 80;
	}
	bool check() override
	{
		if ((sides_count == 3) && ((A+B+C) == 180)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
		check();
		std::cout << std::endl;
	}

};

class Rectangle_triangle : public Triangle
{
public:
	Rectangle_triangle()
	{
		sides_count = 3;
		angles_count = 3;
		name = "Прямоугольный треугольник";
		a = 30, b = 40, c = 50;
		A = 30, B = 60, C = 90;
	}
	bool check() override
	{
		if ((sides_count == 3) && (C == 90)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle()
	{
		sides_count = 3;
		angles_count = 3;
		name = "Равнобедренный треугольник";
		a = 10, b = 20, c = 10;
		A = 45, B = 90, C = 45;
	}
	bool check() override
	{
		if ((a == c) && (A == C)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle()
	{
		sides_count = 3;
		angles_count = 3;
		name = "Равносторонний треугольник";
		a = 10, b = 10, c = 10;
		A = 60, B = 60, C = 60;
	}
	bool check() override
	{
		if (a == b && a == c && A == B && A == C) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << std::endl;
		check();
		std::cout << std::endl;
	}
};


class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Четырехугольник:";
		a = 10, b = 20, c = 30, d = 40;
		A = 50, B = 130, C = 70, D = 110;
	}
	bool check() override
	{
		if ((sides_count == 4) && ((A + B + C + D) == 360)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Rectangular : public Quadrangle
{
public:
	Rectangular()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Прямоугольник";
		a = 10, b = 20, c = 10, d = 20;
		A = 90, B = 90, C = 90, D = 90;
	}
	bool check() override
	{
		if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Square : public Rectangular
{
public:
	Square()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Квадрат";
		a = 10, b = 10, c = 10, d = 10;
		A = 90, B = 90, C = 90, D = 90;
	}
	bool check() override
	{
		if ((a == b && c == d && a == d ) && (A == 90 && B == 90 && C == 90 && D == 90)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Parallelogram : public Rectangular
{
public:
	Parallelogram()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Параллелограмм";
		a = 20, b = 30, c = 20, d = 30;
		A = 30, B = 150, C = 30, D = 150;
	}
	bool check() override
	{
		if ((a == c && b == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		check();
		std::cout << std::endl;
	}
};

class Diamond : public Square
{
public:
	Diamond()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Ромб";
		a = 10, b = 10, c = 10, d = 10;
		A = 70, B = 110, C = 70, D = 110;
	}
	bool check() override
	{
		if ((a == b && c == d && a == d) && (A == C && B == D)) { std::cout << "Правильная" << std::endl; return true; }
		else { std::cout << "Неправильная" << std::endl; return false; }
	}
	void print_info_sides_angles() override
	{
		std::cout << get_name() << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны:";
		std::cout << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:";
		std::cout << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		check();
		std::cout << std::endl;
	}
};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure figure;
	figure.print_info_sides_angles();

	Triangle triangle_1;
	Figure* index_triangle_1 = &triangle_1;
	index_triangle_1->print_info_sides_angles();

	Rectangle_triangle triangle_2;
	Figure* index_triangle_2 = &triangle_2;
	index_triangle_2->print_info_sides_angles();

	Isosceles_triangle triangle_3;
	Figure* index_triangle_3 = &triangle_3;
	index_triangle_3->print_info_sides_angles();
	

	Equilateral_triangle triangle_4;
	Figure* index_triangle_4 = &triangle_4;
	index_triangle_4->print_info_sides_angles();
	



	Quadrangle quadrangle_1;
	Figure* index_quadrangle_1 = &quadrangle_1;
	index_quadrangle_1->print_info_sides_angles();
	

	Rectangular quadrangle_2;
	Figure* index_quadrangle_2 = &quadrangle_2;
	index_quadrangle_2->print_info_sides_angles();

	Square quadrangle_3;
	Figure* index_quadrangle_3 = &quadrangle_3;
	index_quadrangle_3->print_info_sides_angles();

	Parallelogram quadrangle_4;
	Figure* index_quadrangle_4 = &quadrangle_4;
	index_quadrangle_4->print_info_sides_angles();

	Diamond quadrangle_5;
	Figure* index_quadrangle_5 = &quadrangle_5;
	index_quadrangle_5->print_info_sides_angles();



}