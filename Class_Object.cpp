#include<bits/stdc++.h>
using namespace std;
class student{
public:
char name[100];
int roll;
double gpa;


};


int main(){

student a;
a.roll = 10;
a.gpa = 5.9;
char ary[] = "tanim";
strcpy(a.name,ary);

cout<<a.gpa<<endl<<a.name<<endl<<a.roll<<endl;









    return 0;
}