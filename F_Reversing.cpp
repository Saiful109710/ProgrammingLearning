#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;


    Student(int roll, int cls,double gpa){
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa; 
    }
};

Student* fun(){
    Student *Karim = new Student(50,2,4.5);
    
    return Karim;
}

int main(){
    
    Student *p = fun();




cout << p->cls << " " << p->gpa << " " << p->roll << endl;

return 0;
}