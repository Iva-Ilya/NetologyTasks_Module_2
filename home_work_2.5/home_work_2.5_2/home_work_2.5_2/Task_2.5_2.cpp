#include <iostream>
#include <Windows.h>

class Figure
{
protected:
	int sides_count, angles_count;
	std::string name;
public:
	Figure() 
	{
		sides_count = 0;
		angles_count = 0;
		name = "Фигура:";
	}

	std::string get_name() { return name; }
	int get_sides_count() { return sides_count; }
	int get_angles_count() { return angles_count; }
};
class Triangle: public Figure
{
protected:
	int a, b, c, A, B, C; 
public:
	Triangle()
	{
		sides_count = 3;
		angles_count = 3;
		name = "Треугольник:";
		a = 10, b = 20, c = 30;
		A = 30, B = 70, C = 80;
	}

	void print_sides()
	{
		std::cout << "Стороны:";
		std::cout << " a = " << a << " b = " << b << " c = " << c << std::endl;
	}
	void print_angles()
	{
		std::cout << "Углы:";
		std::cout << " A = " << A << " B = " << B << " C = " << C << std::endl;
	}

};

class Rectangle_triangle : public Triangle
{
public:
	Rectangle_triangle()
	{
		name = "Прямоугольный треугольник";
		a = 30, b = 40, c = 50;
		A = 30, B = 60, C = 90;
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle ()
	{
		name = "Равнобедренный треугольник";
		a = 10, b = 20, c = 10;
		A = 45, B = 90, C = 45;
	}

};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle()
	{
		name = "Равносторонний треугольник";
		a = 10, b = 10, c = 10;
		A = 60, B = 60, C = 60;
	}

};



class Quadrangle: public Figure
{
protected:
	
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle()
	{
		sides_count = 4;
		angles_count = 4;
		name = "Четырехугольник:";
		a = 10, b = 20, c = 30, d = 40;
		A = 50, B = 130, C = 70, D = 120;
	}

	void print_sides()
	{
		std::cout << "Стороны: ";
		std::cout << " a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	}
	void print_angles()
	{
		std::cout << "Углы: ";
		std::cout << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

};

class Rectangular : public Quadrangle
{
public:
	Rectangular()
	{
		name = "Прямоугольник";
		a = 10, b = 20, c = 10, d = 20;
		A = 90, B = 90, C = 90, D = 90;
	}
};

class Square : public Rectangular
{
public:
	Square()
	{
		name = "Квадрат";
		a = 10, b = 10, c = 10, d = 10;
	}
};

class Parallelogram : public Rectangular
{
public:
	Parallelogram()
	{
		name = "Параллелограмм";
		a = 20, b = 30, c = 20, d = 30;
		A = 30, B = 150, C = 30, D = 150;
	}
};

class Diamond: public Rectangular
{
public:
	Diamond()
	{
		name = "Ромб";
		A = 70, B = 110, C = 70, D = 110;
	}
};



void print_info_triangle(Triangle *any_triangle)
{
	std::cout << any_triangle->get_name() << std::endl;
	any_triangle->print_sides();
	any_triangle->print_angles();
	std::cout << std::endl;
}

void print_info_quadrangle(Quadrangle *any_quadrangle)
{
	std::cout << any_quadrangle->get_name() << std::endl;
	any_quadrangle->print_sides();
	any_quadrangle->print_angles();
	std::cout << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle triangle_1;
	Triangle *index_triangle_1 = &triangle_1;
	print_info_triangle(index_triangle_1);

	Rectangle_triangle triangle_2;
	Triangle* index_triangle_2 = &triangle_2;
	print_info_triangle(index_triangle_2);

	Isosceles_triangle triangle_3;
	Triangle* index_triangle_3 = &triangle_3;
	print_info_triangle(index_triangle_3);

	Equilateral_triangle triangle_4;
	Triangle* index_triangle_4 = &triangle_4;
	print_info_triangle(index_triangle_4);



	Quadrangle quadrangle_1;
	Quadrangle* index_quadrangle_1 = &quadrangle_1;
	print_info_quadrangle(index_quadrangle_1);
	
	Rectangular quadrangle_2;
	Quadrangle* index_quadrangle_2 = &quadrangle_2;
	print_info_quadrangle(index_quadrangle_2);

	Square quadrangle_3;
	Quadrangle* index_quadrangle_3 = &quadrangle_3;
	print_info_quadrangle(index_quadrangle_3);

	Parallelogram quadrangle_4;
	Quadrangle* index_quadrangle_4 = &quadrangle_4;
	print_info_quadrangle(index_quadrangle_4);

	Diamond quadrangle_5;
	Quadrangle* index_quadrangle_5 = &quadrangle_5;
	print_info_quadrangle(index_quadrangle_5);


	return 0;
}