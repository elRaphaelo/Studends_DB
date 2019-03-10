#pragma once
#include "Student.hpp"
#include <vector>
#include <string>
#include <iostream>
#include<fstream>


using Students = std::vector<Student>;



class Database
{
public:
    
    void sortBy_Index();
    void sortBy_lastN();
    void sortBy_Pesel();

    Students::iterator searchBy_Pesel (long pesel);
    void searchBy_lastN (string lastN);

    void removeBy_Index(int index);
    void removeBy_Pesel(long pesel);

    void showDB();
    void load_from_file();
    void save_to_file();
    vector<string>changeString(string line);

    void change_address_By_Pesel(long pesel);
    void addStudent(const Student & student);

private:
    Students students_;
    void db_header();
};
