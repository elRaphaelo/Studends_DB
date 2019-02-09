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
    sortBy_Index();
    //db.removeStudent(120001); main.cpp:15:8: error: ‘class Database’ has no member named ‘removeStudent’; did you mean ‘addStudent’?


}
