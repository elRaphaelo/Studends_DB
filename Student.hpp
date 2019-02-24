#pragma once
#include <string>
#include <sstream>

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
    string get_all_info() const;
    int getIndex() const;
    long getPesel() const;
    string getlastN() const;

private:

    string firstN_;
    string lastN_;
    string addres_;
    int index_;
    long pesel_;   

};


