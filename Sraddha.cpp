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




#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int StdID;
    double gpa;

};


int main(){

Student tanim,afif;
tanim.name = "Mahmud Tanim";
tanim.StdID = 252311098;
tanim.gpa = 4.54;


afif.name = "Afif Mahmud";
afif.StdID = 311098;
afif.gpa = 5.54;

cout<<tanim.name<<" "<<tanim.StdID<<" "<<tanim.gpa<<endl;
cout<<afif.name<<" "<<afif.StdID<<" "<<afif.gpa<<endl;

return 0;
}
