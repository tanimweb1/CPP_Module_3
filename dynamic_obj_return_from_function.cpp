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