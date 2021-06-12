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
            ofstream MyFile;
            ifstream exists;
            exists.open("attendance.csv");

            if(!exists){
                MyFile.open("attendance.csv",fstream::in | fstream::out | fstream::trunc);
                MyFile <<  "Id de Estudiante;Nombre/s;Apellido/s;Id de Materia;Nombre de Materia;Marca temporal;Presente" ;
                MyFile << "\n";
                MyFile << student->getIdentifier();
                MyFile << ";"+student->getName()+";";
                MyFile << student->getSurname()+";";
                MyFile << course->getIdentifier();
                MyFile << ";"+course->getName()+";";
                MyFile << fecha+";";
                MyFile << state;
                MyFile.close();
            }else{
                MyFile.open("attendance.csv",fstream::in | fstream::out | fstream::app);
                MyFile << "\n";
                MyFile << student->getIdentifier();
                MyFile << ";"+student->getName()+";";
                MyFile << student->getSurname()+";";
                MyFile << course->getIdentifier();
                MyFile << ";"+course->getName()+";";
                MyFile << fecha+";";
                MyFile << state;
                MyFile.close();
            }


        }

};
