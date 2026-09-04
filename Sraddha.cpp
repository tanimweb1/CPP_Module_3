#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
string name;
string dept;
double salary;


void changeDept(string newDept){
    dept = newDept;
}

};

int  main(){

    Teacher t1;
    t1.name = "Tanim";
    t1.dept = "CSE";
t1.salary = 25000;

cout<<t1.name<<" "<<t1.dept<<" "<<t1.salary<<endl;
    return 0;
}