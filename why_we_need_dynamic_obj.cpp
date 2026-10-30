#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int id;
    int batch;

    Student(int roll, int id, int batch)
    {
        this->roll = roll;
        this->id = id;
        this->batch = batch;
    }
};
Student *fun()
{
    Student Karim(25, 89, 37);
    Student *P = &Karim;
    return P;
}

int main()
{
    Student *obj = fun();
    cout << obj->id << " " << obj->batch << " " << obj->roll << endl;

    return 0;
}
