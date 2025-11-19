#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangular.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Diamond.h"
#include "check_error.h"




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	Figure figure;
	figure.print_info_sides_angles();
		try
		{
		Triangle triangle_1;
		Figure* index_triangle_1 = &triangle_1;
		index_triangle_1->print_info_sides_angles();
		}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }

	try
	{
		Rectangle_triangle triangle_2;
		Figure* index_triangle_2 = &triangle_2;
		index_triangle_2->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl;	}

	try
	{
		Isosceles_triangle triangle_3;
		Figure* index_triangle_3 = &triangle_3;
		index_triangle_3->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }

	try
	{
		Equilateral_triangle triangle_4;
		Figure* index_triangle_4 = &triangle_4;
		index_triangle_4->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }


	try
	{
		Quadrangle quadrangle_1;
		Figure* index_quadrangle_1 = &quadrangle_1;
		index_quadrangle_1->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }

	try
	{
		Rectangular quadrangle_2;
		Figure* index_quadrangle_2 = &quadrangle_2;
		index_quadrangle_2->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }

	try
	{
		Square quadrangle_3;
		Figure* index_quadrangle_3 = &quadrangle_3;
		index_quadrangle_3->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }

	try
	{
		Parallelogram quadrangle_4;
		Figure* index_quadrangle_4 = &quadrangle_4;
		index_quadrangle_4->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }
	
	try
	{
		Diamond quadrangle_5;
		Figure* index_quadrangle_5 = &quadrangle_5;
		index_quadrangle_5->print_info_sides_angles();
	}
	catch (const error_message& error)
	{ std::cout << "Ошибка создания фигуры. Причина: " << error.what() << std::endl << std::endl; }
	
}