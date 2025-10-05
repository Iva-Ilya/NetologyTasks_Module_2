#include <iostream>
#include "class_counter.h"


Counter::Counter() {}
Counter::Counter(int value_init_state) { this->state = value_init_state; }

int Counter::get_state() { std::cout << this->state << std::endl; return this->state; }
void Counter::up() { this->state++; }
void Counter::down() { this->state--; }