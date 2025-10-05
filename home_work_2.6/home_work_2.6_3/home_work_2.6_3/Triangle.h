#ifndef home_work_2_6_3_Triangle
#define home_work_2_6_3_Triangle

#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle();
	bool check() override;
	void print_info_sides_angels() override;
};

#endif