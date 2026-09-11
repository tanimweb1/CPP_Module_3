#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int gpa;

    Student(int roll, int cls, int gpa)
    {
        this->roll = roll;
        this->gpa = gpa;
        this->cls = cls;
    }
};

Student fun()
{
}

int main()
{
    fun();
    Student Rahim(40, 50, 60);
    Student *Karim = new Student(4, 5, 6);
    ///(*Karim).roll = Karim->roll
    cout << (*Karim).roll << " " << (*Karim).gpa << " " << (*Karim).cls << endl;
    cout << Rahim.roll << " " << Rahim.gpa << " " << Rahim.cls << endl;

    return 0;
}