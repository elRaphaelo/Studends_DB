#include "Student.hpp"
#pragma once
#include <vector>
#include <string>
#include <iostream>


using Students = std::vector<Student>;



class Database
{
public:
    
    void db_header();
    //sortowanie
    void sortBy_Index();
    void sortBy_lastN();
    void sortBy_Pesel();

    //wyszukiwanie
    Student searchBy_Pesel (long pesel);
    void searchBy_lastN (string lastN);

    //usuwanie
    void removeBy_Index(int index);
    void removeBy_Pesel(long pesel);

    //dzialania na calej bazie    
    void showDB();
    void load_from_file();
    void save_to_file();

    //zmiany
    void change_address_By_Pesel(long pesel);
    void addStudent(const Student & student);

private:
    Students students_;
};
