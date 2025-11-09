//#ifndef home_work_2_6_3
//#define home_work_2_6_3

#ifndef home_work_2_8_2_check_error
#define home_work_2_8_2_check_error
#include <iostream>

class error_message : public std::exception
{
public:
    error_message(const std::string& message);
    const char* what() const noexcept override;
protected:
    std::string message;
};

#endif
