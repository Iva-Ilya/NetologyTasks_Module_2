#ifndef home_work_2_6_3_Isosceles_triangle
#define home_work_2_6_3_Isosceles_triangle
#include "Triangle.h"

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle();
	bool check() override;
	void print_info_sides_angles() override;
};


#endif

