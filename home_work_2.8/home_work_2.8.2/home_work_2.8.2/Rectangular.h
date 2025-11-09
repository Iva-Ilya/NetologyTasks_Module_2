#ifndef home_work_2_6_3_Rectangular
#define home_work_2_6_3_Rectangular

#include "Quadrangle.h"

class Rectangular : public Quadrangle
{
public:
	Rectangular();
	bool check() override;
	void print_info_sides_angles() override;
};

#endif

