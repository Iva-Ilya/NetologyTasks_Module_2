#ifndef home_work_2_6_3_Diamond
#define home_work_2_6_3_Diamond

#include "Square.h"

class Diamond : public Square
{
public:
	Diamond();
	bool check() override;
	void print_info_sides_angles() override;
};

#endif

