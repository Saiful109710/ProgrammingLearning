#include<bits/stdc++.h>
using namespace std;


class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student l, Student r){
   return  l.math_marks+l.eng_marks == r.math_marks + r.eng_marks ? l.id < r.id : (l.math_marks + l.eng_marks) > (r.math_marks + r.eng_marks);
}
int main(){
int n;
cin >> n;
Student a[n];
for(int i=0;i<n;i++){
    cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
}

sort(a,a+n,cmp);

for(int j=0;j<n;j++){
    cout << a[j].nm << " " << a[j].cls << " " << a[j].s << " " << a[j].id << " " << a[j].math_marks << " " << a[j].eng_marks << endl;
}

return 0;
}