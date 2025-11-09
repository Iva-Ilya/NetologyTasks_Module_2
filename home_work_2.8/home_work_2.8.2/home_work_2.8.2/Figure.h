#ifndef home_work_2_6_3_Figure
#define home_work_2_6_3_Figure
#include <iostream>

class Figure
{
protected:
		int sides_count, angles_count;
		std::string name;
		int a, b, c, d, A, B, C, D;
	public:
		Figure();
		std::string get_name();
		int get_sides_count();
		int get_angles_count();

		virtual bool check();
		virtual void print_info_sides_angles();
};
 

#endif
