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
    db.save_to_file();
    cout << "\t cala baza: \t \n";
    db.showDB();
    db.removeBy_Pesel(89010101123);
    cout << "\t po usunieciu: \t \n";
    db.showDB();
    cout << "\t z pliku: \t \n";
    db.load_from_file();
    //cout << "\n \t After loading from file: \t \n \n";
    //db.showDB();



}
