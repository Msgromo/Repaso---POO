#include "../include/Student.hpp"
#include "../include/Course.hpp"
//#include "../include/AttendanceManagement.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class AttendanceManagement{
public:
        void takeAttendance(Student* student, Course* course, string fecha, bool state){
            ofstream MyFile("attendance.csv");
            string estado;
            if(state==true){
                estado = "true";
            }else{
                estado = "false";
            }
            string row = student->getName()+";" + student->getSurname()+";"+course->getName()+";"+fecha+";"+estado;
            MyFile <<  row ;//<< "," << student->getSurname << "," << course->getName << "," << fecha;
            MyFile.close();

        }

};
