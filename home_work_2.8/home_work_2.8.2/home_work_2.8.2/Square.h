#ifndef home_work_2_6_3_Square
#define home_work_2_6_3_Square

#include "Rectangular.h"

class Square : public Rectangular
{
public:
	Square();
	bool check() override;
	void print_info_sides_angles() override;
};

#endif

