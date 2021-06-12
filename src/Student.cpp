#include <iostream>
//#include "../include/Student.hpp"
using namespace std;

class Student{
    private:
        int identifier;
        string name;
        string surname;

    public:
        //Student(){}

        void setIdentifier(int identifier){
            this->identifier = identifier;
        }

        void setName(string name){
            this->name = name;
        }

        void setSurname(string surname){
            this->surname = surname;
        }

        int getIdentifier(){
            return this->identifier;
        }

        string getName(){
            return this->name;
        }

        string getSurname(){
            return this->surname;
        }

};
