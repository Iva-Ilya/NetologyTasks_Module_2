#ifndef home_work_2_6_3_Parallelogram
#define home_work_2_6_3_Parallelogram

#include "Rectangular.h"

class Parallelogram : public Rectangular
{
public:
	Parallelogram();
	bool check() override;
	void print_info_sides_angles() override;
};

#endif


