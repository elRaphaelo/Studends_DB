#include "Student.hpp"
#include <iostream>
#include <iomanip>


using namespace std;


Student::Student(const string & firstN,
                const string & lastN,
                const string & addres,
                int index,
                long pesel)
    
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

/*void Student::add()
    {   
        cout<<"Dodawanie nowego wpisu"<<endl;
        cout<<"Podaj imie: ";
        cin>>firstN;
        cout<<"Podaj nazwisko: ";
        cin>>lastN;
        cout<<"Podaj adres: ";
        cin>>addres;
        cout<<"Podaj numer indeksu: ";
        cin>>index;
        cin>>lastN;
        cout<<"Podaj numer PESEL: ";
        cin>>pesel;

    }

void Student::show2()
{
    cout<<"Imie: "<<firstN_<<" || Naziwsko: "<<lastN_<<" || Nr. Pesel: "<<pesel_<<" || Adres: "<<addres_<<" || Indeks: "<<index_<<endl;

}*/


void Student::show(){
    cout<<left    
        <<setw(10)<<firstN_<<" || "
        <<setw(10)<<lastN_<<" || "
        <<setw(11)<<pesel_<<" || "
        <<setw(10)<<addres_<<" || "
        <<setw(7)<<index_<<endl<<endl;
}


string Student::get_all_info() const{
    stringstream ss;
    ss<<left;   
    ss<<setw(10)<<firstN_<<" || ";
    ss<<setw(10)<<lastN_<<" || ";
    ss<<setw(11)<<to_string(pesel_)<<" || ";
    ss<<setw(10)<<addres_<<" || ";
    ss<<setw(7)<<to_string(index_);
    ss<<endl;
    return ss.str();
}
 
     














