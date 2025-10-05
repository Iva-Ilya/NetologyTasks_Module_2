#include <iostream>
#include <Windows.h>



class Figure
{
public:
	int get_sides_count() const				// const показывает, что методы не измен€ют объект, и улучшает читаемость/надежность
	{
		return sides_count;
	}
	std::string get_name()					// const показывает, что методы не измен€ют объект, и улучшает читаемость/надежность
	{
		return name;
	}

protected:
	int sides_count = 0;
	std::string name = "‘игура";
};



class Triangle : public Figure
{
public:
	Triangle()
	{
		sides_count = 3;
		name = "“реугольник";
	}
};


class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		sides_count = 4;
		name = "„етырехугольник";
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << " оличество сторон: " << std::endl;
	Figure figure;
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	Triangle triangle;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	Quadrangle quadrangle;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;

}