#include <iostream>
//#include "../include/Course.hpp"

using namespace std;

class Course{
    private:
        int identifier;
        string name;

    public:
        //Course(){}

        void setIdentifier(int identifier){
            this->identifier = identifier;
        }

        void setName(string name){
            this->name = name;
        }

        int getIdentifier(){
            return this->identifier;
        }

        string getName(){
            return this->name;
        }
};
