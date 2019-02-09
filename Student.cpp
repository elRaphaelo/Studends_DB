#include "Student.hpp"
#include <iostream>

using namespace std;


Student::Student(const string & firstN,
                const string & lastN,
                const string & addres,
                int index,
                long pesel)
    
    : firstN_(firstN)
    , lastN_(lastN)
    , index_(index)
    , pesel_(pesel)
{}

int Student::getIndex() const
{
    return index_;
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

void Student::show()
{
    cout<<"Imie: "<<firstN<<" || Naziwsko: "<<lastN<<" || Nr. Pesel: "<<pesel<<" || Adres: "<<addres<<endl;

}*/
