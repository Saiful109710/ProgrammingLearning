#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;

    // if(a>b){
    //     cout << "Max: " << a << endl;
    // }else{
    //     cout << "Max: "<< b << endl;
    // }

    cout << "Min: " << min({2,4,5,6,1}) << endl;
    cout << "Max: "<< max({10,23,56,32,5}) << endl;
    swap(a,b);
    cout << a << " " << b << endl;
}