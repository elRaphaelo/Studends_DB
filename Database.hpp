#include "Student.hpp"
#pragma once
#include <vector>
#include <string>

using Students = std::vector<Student>;


class Database
{
public:
    
    //sortowanie
    void sortBy_Index();
    void sortBy_lastN();
    void sortBy_Pesel();

    //wyszukiwanie
    void searchBy_Pesel (double pesel);
    void searchBy_lastN (string lastN);

    //usuwanie
    void removeBy_Index(int index);
    void removeBy_Pesel(double pesel);

    //dzialania na calej bazie    
    void showDB();
    void load_from_file();
    void save_to_file();

    //zmiany
    void change_address_By_Pesel(double pesel);
    void addStudent(const Student & student);

private:
    Students students_;
};
