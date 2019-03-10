#include "Database.hpp"
#include <algorithm>
#include <iterator>
#include <iomanip>
#include<fstream>
#include<cstdlib>

using namespace std;



void Database::addStudent(const Student & student)
{
    students_.emplace_back(student);
}

void Database::db_header(){
    cout<<left    
        <<setw(10)<<"Imie: "<<" || "
        <<setw(10)<<"Nazwisko:"<<" || "
        <<setw(10)<<"Adres:"<<" || "
        <<setw(7)<<"Indeks:"<<" || "
        <<setw(11)<<"Pesel:"<<" || "      
        <<setw(6)<<"Plec:"<<endl<<"----------------------------------------------------------------"<<endl;
}

void Database::showDB(){
    db_header();
        
    for (auto & student : students_){
    cout<<student.get_all_info();
    }
}

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

Students::iterator Database::searchBy_Pesel(long pesel){ 

    auto it = find_if(begin(students_),end(students_),[pesel](const auto & student){
        return student.getPesel()==pesel;
    });
    if (it != end(students_))
    {
        return it;
    }
}

void Database::searchBy_lastN(string lastN){
    db_header();     
    for (auto & student : students_){  
        if (student.getlastN() == lastN)
        {           
            cout<<student.get_all_info();
        }
    }
}

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

void Database::removeBy_Pesel(long pesel){

    auto it = searchBy_Pesel(pesel);
    students_.erase(it);
}

void Database::save_to_file(){
    
    fstream file_DB("baza danych.txt", file_DB.in | file_DB.out);
    if(!file_DB.is_open()){
        cout<<"error"<<endl;}
    else{    
    for (auto & student : students_){

        file_DB<<student.get_all_info();
        
        }
    }
    file_DB.close();
}


void Database::load_from_file(){
    
    string filename = "baza danych.txt";
    ifstream istrm(filename, std::ios::in);
    
    if (!istrm.is_open()){
        cout<<"file does not exists";
        exit(0);}
    else{

        string lane;
        while(!istrm.eof())
        {
            getline(istrm,lane);
            vector<string> data = changeString(lane);
            for (int i = 0; i < data.size(); i++) {
                cout << data.at(i) << ' ';
            }
            cout<<endl;
            Student* student = new Student(data);
            addStudent(student);
        }
    }

}

vector<string> Database::changeString(string lane)
{
    string::size_type pos;
    vector<string> words;
    while(lane.size() != 0)
    { 
        pos = lane.find("|");
        words.emplace_back(lane.substr(0,pos));
        lane.erase(0,pos+1);
    }
    return words;
}










