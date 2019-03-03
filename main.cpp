#include "Student.hpp"
#include "Database.hpp"


using namespace std;

int main()
{
    Database db;
    Student rafal("Rafal", "EM", "Wroclaw", 159753, 89010101123,Gender::m);
    db.addStudent(rafal);
    Student andrzej("Andrzej", "Kowalski", "Sosnowiec", 120000, 82022987654,Gender::m);
    db.addStudent(andrzej);
    Student wiola("Wiola", "EM", "Wroclaw", 153454, 89100201678, Gender::f);
    db.addStudent(wiola);
    db.showDB();
    db.removeBy_Pesel(89010101123);
    db.showDB();
    db.save_to_file();



}
