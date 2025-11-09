#ifndef home_work_2_6_3_Quadrangle
#define home_work_2_6_3_Quadrangle

#include "Figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle();
	bool check() override;
	void print_info_sides_angles() override;
};

#endif
