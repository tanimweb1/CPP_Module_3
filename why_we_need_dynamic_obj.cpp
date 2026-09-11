#include<bits/stdc++.h>
using namespace std;
class Student{
public:
int roll;
int id;
int cls;

Student(int roll,int id,int cls){
this->roll = roll;
this->id = id;
this->cls = cls;

}


};

Student* fun(){
    Student Rahim(10,20,30);
    Student*p = &Rahim;
    return p;
}

int main(){



Student* p = fun();
cout<<p->roll<<" "<<p->id<<" "<<p->cls<<endl;


}