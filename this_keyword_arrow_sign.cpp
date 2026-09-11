#include<bits/stdc++.h>
using namespace std;

class Student{
public:
int roll;
int cls;
int gpa;

Student(int roll,int cls,int gpa){

this->roll = roll;
this->cls = cls;
this->gpa = gpa;

}
};

int main(){

Student tanim(54,5,10);
Student Rahim(2523,5,4); 

cout<<tanim.cls<<" "<<tanim.gpa<<" "<<tanim.roll<<endl;
cout<<Rahim.cls<<" "<<Rahim.gpa<<" "<<Rahim.roll<<endl;


    return 0;
}