#include<bits/stdc++.h>
using namespace std;

class Student{
public:
char name[100];
int roll;
double gpa;
};

int main(){

Student a;
a.roll = 10;
a.gpa = 4.58;
char ad[100] = "Akib";
strcpy(a.name,ad);

cout<<a.name<<" "<<a.gpa<<" "<<a.roll<<endl;

    return 0;
}
