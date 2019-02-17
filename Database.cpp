#include "Database.hpp"
#include <algorithm>
#include <iterator>
#include <iomanip>

using namespace std;

void Database::addStudent(const Student & student)
{
    students_.emplace_back(student);
}

void Database::db_header(){
    cout<<left    
        <<setw(10)<<"Imie: "<<" || "
        <<setw(10)<<"Nazwisko:"<<" || "
        <<setw(11)<<"Pesel:"<<" || "
        <<setw(10)<<"Adres:"<<" || "
        <<setw(7)<<"Indeks:"<<endl<<"----------------------------------------------------------------"<<endl;
}

void Database::showDB(){
    db_header();
        
    for (auto & student : students_){
        student.show();
    }
}


//***sortowanie***

void Database::sortBy_Index()
{
    sort(begin(students_), end(students_),[](const auto & lhs, const auto & rhs){
        return lhs.getIndex() < rhs.getIndex();
    });
}

void Database::sortBy_lastN()
{
    sort(students_.begin(), students_.end(),[](const auto & lhs, const auto & rhs){
        return lhs.getlastN()< rhs.getlastN();
    });
}

void Database::sortBy_Pesel()
{
    sort(begin(students_), end(students_),[](const auto & lhs, const auto & rhs){
        return lhs.getPesel() < rhs.getPesel();
    });
}

//***wyszukiwanie***

// w funkcji ponizej wzorowalem sie na kims innym, ale nie do konca rozumiem dlaczego to dziala, chodzi o samo utowrzenie funkcji (nie void, to pewnie sa jakies podstawy, ktore mi umykaja, i pozniej jesli dobrze rozumiem to zwracamy co na co wskazuje iterator?
Student Database::searchBy_Pesel(long pesel){ 

    auto it = find_if(begin(students_),end(students_),[pesel](const auto & student){
        return student.getPesel()==pesel;
    });
    if (it != end(students_))
    {
        return *it;
    }
    
}


//wyszukiwanie tylko z wyswietleniem
void Database::searchBy_lastN(string lastN){
    db_header();     
    for (auto & student : students_){  
        if (student.getlastN() == lastN)
        {           
            student.show();
        }
    }
}

//***usuwanie***

void Database::removeBy_Index(int index)
{
    auto it = find_if(begin(students_),end(students_),[index](const auto & student){
        return student.getIndex()==index;
    });
    if (it != end(students_))
    {
        students_.erase(it);
    }

}

void Database::removeBy_Pesel(long pesel)
{
    auto it = find_if(begin(students_),end(students_),[pesel](const auto & student){
        return student.getPesel()==pesel;
    });
    if (it != end(students_))
    {
        students_.erase(it);
    }

}


