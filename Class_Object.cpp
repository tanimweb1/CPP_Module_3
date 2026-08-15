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










// Class and obj with input 

#include<bits/stdc++.h>
using namespace std;

class Student{
public:
char name[100];
int roll;
double gpa;
};

int main(){

Student a,b;
cin>>a.name>>a.gpa>>a.roll;
cin>>b.name>>b.gpa>>b.roll;


cout<<a.name<<" "<<a.gpa<<" "<<a.roll<<endl;
cout<<b.name<<" "<<b.gpa<<" "<<b.roll<<endl;
    return 0;
}



// class and object input with space 



#include<bits/stdc++.h>
using namespace std;

class Student{
public:
char name[100];
int roll;
double gpa;
};

int main(){

Student a,b;
cin.getline(a.name,100);
cin>>a.gpa>>a.roll;
cin.ignore();
cin.getline(b.name,100);
cin>>b.gpa>>b.roll;


cout<<a.name<<" "<<a.gpa<<" "<<a.roll<<endl;
cout<<b.name<<" "<<b.gpa<<" "<<b.roll<<endl;
    return 0;
}
