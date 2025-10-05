#ifndef home_work_2_6_3_Equilateral_triangle
#define home_work_2_6_3_Equilateral_triangle
#include "Triangle.h"


class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle();
	bool check() override;
	void print_info_sides_angels() override;
};


#endif
