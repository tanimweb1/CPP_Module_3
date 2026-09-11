#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int marks, int cls)
    {

        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = marks;
        this->cls = cls;
    }
};

int main()
{
    Student a("Tanim", 97, 'c', 99, 9);
    Student b("Banim", 98, 'c', 96, 9);
    Student c("Aanim", 99, 'c', 93, 9);

    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << a.name;
    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << b.name;
    }
    else
    {
        cout << c.name;
    }
    return 0;
}