#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks;
};
// bool cmp(Student l,Student b){
//     if(l.marks < b.marks){
//         return true;
//     }
//     else {
//         return false;
//     }
    
// }
int main(){
int n;
cin >> n;



Student a[n];
for(int i=0;i<n;i++){
    
    cin >> a[i].age >> a[i].marks >> a[i].name;
}



for(int i=0;i<n;i++){
    cout << a[i].name << " "<< a[i].age << " "<< a[i].marks << endl;
}
return 0;
}