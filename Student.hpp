#pragma once
#include <string>

using namespace std;

class Student
{

public:

    Student(const string & firstN,
            const string & lastN,
            const string & addres,
            int index,
            long pesel);
   
    void show();
    int getIndex() const;


private:

    string firstN_;
    string lastN_;
    string addres_;
    int index_;
    long pesel_;   

};


