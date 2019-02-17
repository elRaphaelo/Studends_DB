#include "Student.hpp"
#include "Database.hpp"


using namespace std;

int main()
{
    Database db;
    Student rafal("Rafal", "EM", "Wroclaw", 159753, 89010101123);
    db.addStudent(rafal);
    Student andrzej("Andrzej", "Kowalski", "Sosnowiec", 120000, 82022987654);
    db.addStudent(andrzej);
    Student wiola("Wiola", "EM", "Wroclaw", 153454, 89100201678);
    db.addStudent(wiola);
    db.showDB();
    db.searchBy_lastN("EM");
    db.removeBy_Index(120000);
    db.showDB();
    db.searchBy_Pesel(89010101123);


}
