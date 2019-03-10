#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

enum Gender: const char {m  , f};

class Student
{

public:

    Student(const string & firstN,
            const string & lastN,
            const string & addres,
            int index,
            long pesel,
            const Gender gender);
   
    void show();
    Student(vector<string> data);
    string get_all_info() const;
    int getIndex() const;
    long getPesel() const;
    string getlastN() const;
    Gender getGender() const;

private:

    string firstN_;
    string lastN_;
    string addres_;
    int index_;
    long pesel_;
    Gender gender_;   

};


