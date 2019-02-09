#include "Database.hpp"
#include <algorithm>

using namespace std;

void Database::addStudent(const Student & student)
{
    students_.emplace_back(student);
}

void Database::sortBy_Index()
{
    sort(begin(students_), end(students_),[](const auto &lhs, const auto & rhs){
        return lhs.getIndex() < rhs.getIndex();
    });
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

//miejsce na wiecej funkcji juz tutaj czeka
