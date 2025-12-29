#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[101];
        int cls;
        char section;
        int math_marks;
        int roll;

        Student(char name[],int cls, char section ,int math_marks, int roll){
                strcpy(this->name, name);
                this->cls = cls;
                this->section = section;
                this->math_marks = math_marks;
                this->roll = roll;
        }
};
int main(){

    Student s1("Rahim",5,'A',45,2);
    cout << s1.name << " " << s1.math_marks;

return 0;
}