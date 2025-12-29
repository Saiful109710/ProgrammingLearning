#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        char Name[100];
        int ID;
        char Section;
        int Total_Marks;

};
int main(){
int T;
cin>>T;

for(int i=0;i<T;i++){
    Student topper;
    int max_marks = -1000;
    for(int j=0;j<3;j++){
        Student temp_student;
        cin >> temp_student.ID >> temp_student.Name >> temp_student.Section >> temp_student.Total_Marks;
        if(temp_student.Total_Marks>max_marks){
            topper = temp_student;
            max_marks = temp_student.Total_Marks;
        }else if(temp_student.Total_Marks==max_marks){
            if(topper.ID>temp_student.ID){
                topper = temp_student;
            }
        }
    }

    cout << topper.ID <<" "<< topper.Name <<" "<< topper.Section << " " << topper.Total_Marks<<endl ;

}
return 0;
}