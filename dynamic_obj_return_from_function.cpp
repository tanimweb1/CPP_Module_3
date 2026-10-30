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
   Student*Rahim =  new Student(10,20,30);
    return Rahim;
}

int main(){

Student*obj = fun();
cout<<(*obj).roll<<" "<<(*obj).id<<" "<<(*obj).cls<<endl;


}

// Practice again 

#include<bits/stdc++.h>
using namespace std;
class Student{
public: 
int roll;
int id;
int cls;

Student(int roll, int id, int cls){
this->cls = cls;
this->roll = roll;
this->id = id;


}


};

Student* fun(){

Student*s = new Student(50,60,70);
return s;

}

int main(){
Student Rahim(10,20,30);
Student*p=fun();
cout<<Rahim.cls<<" "<<Rahim.id<<" "<<Rahim.roll<<endl;
cout<<p->cls<<" "<<p->id<<" "<<p->roll<<endl;

    return 0;
}
