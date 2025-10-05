#ifndef home_work_2_6_3_Rectangle_triangle
#define home_work_2_6_3_Rectangle_triangle
#include "Triangle.h"

class Rectangle_triangle : public Triangle
{
public:
	Rectangle_triangle();
	bool check() override;
	void print_info_sides_angels() override;
};


#endif

