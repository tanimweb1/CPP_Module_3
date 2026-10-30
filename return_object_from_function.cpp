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


// retunr 

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
Student fun(){

    Student Karim("Karim",25,2523);
return Karim;
}


int main(){

    Student obj = fun();

cout<<obj.name<<" "<<obj.id<<" "<<obj.roll<<endl;





}
