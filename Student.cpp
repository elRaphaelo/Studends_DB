#include "Student.hpp"
#include <iostream>



using namespace std;


Student::Student(const string & firstN,
                const string & lastN,
                const string & addres,
                int index,
                long pesel,
                const Gender gender)
    
    : firstN_(firstN)
    , lastN_(lastN)
    , addres_(addres)
    , index_(index)
    , pesel_(pesel)
{}

int Student::getIndex() const
{
    return index_;
}

long Student::getPesel() const
{
    return pesel_;
}

string Student::getlastN() const
{
    return lastN_;
}

Gender Student::getGender() const
{
    return gender_;
}

string Student::get_all_info() const{
    stringstream ss;
    ss<<left;   
    ss<<setw(10)<<firstN_<<"|";
    ss<<setw(10)<<lastN_<<"|";
    ss<<setw(10)<<addres_<<"|";
    ss<<setw(7)<<to_string(index_)<<"|";
    ss<<setw(12)<<to_string(pesel_)<<"|";
    ss<<setw(6)<<gender_<<"|";
    ss<<endl;
    return ss.str();
}
 
Student::Student(vector<string> data)
          : data[0],
            data[1],
            data[2],
            data[3],
            data[4],
            data[5]
{}














