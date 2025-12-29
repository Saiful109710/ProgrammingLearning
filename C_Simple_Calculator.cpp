#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[101];
        int cls;
        char section;
        int math_marks;
        int roll;

        // Student(char name[],int cls, char section ,int math_marks, int roll){
        //         strcpy(this->name, name);
        //         this->cls = cls;
        //         this->section = section;
        //         this->math_marks = math_marks;
        //         this->roll = roll;
        // }
};
int main(){
    int max_mark =-1000;
    Student topper;

    int n;
    cin >> n;

    for(int i=0;i<n;i++ ){
        Student temp_stu;
        cin>> temp_stu.name >> temp_stu.roll >> temp_stu.section >> temp_stu.math_marks >> temp_stu.cls;
        // cout<< temp_stu.name << temp_stu.roll << temp_stu.section << temp_stu.math_marks << temp_stu.cls << endl;

        if(max_mark<temp_stu.math_marks){
            max_mark = temp_stu.math_marks;
            topper = temp_stu;
        }else if(max_mark==temp_stu.math_marks){
            if(topper.roll>temp_stu.roll){
                topper = temp_stu;
            }
        }


    }

    cout << topper.name;

return 0;
}