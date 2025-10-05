#ifndef home_work_2_6_2_class_counter
#ifndef home_work_2_6_2_class_counter
#define home_work_2_6_2_class_counter


class Counter
{
private:
	int state = 0;
public:
	Counter();
	Counter(int value_init_state);

	int get_state();
	void up();
	void down();

};

#endif 