#ifndef AttendanceManagement_H
#define AttendanceManagement_H
#include "./Student.hpp"
#include "./Course.hpp"
#include "../src/AttendanceManagement.cpp"
#include <iostream>

using namespace std;

    void takeAttendance(Student* student, Course* course, string fecha, bool state);



#endif
