#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int id;

    Student(string name,int roll,int id){
this->name= name;
this->roll = roll;
this->id = id;

    }

};
int main(){
Student Rahim("Tanim",98,2523);
cout<<Rahim.name<<" "<<Rahim.id<<" "<<Rahim.roll<<endl;





}