#include<iostream>
using namespace std;
int main(){
    int day;

    cin >> day;

    switch(day){
        case 1:
        cout << "Saturday\n";
        break;
        case 2:
        cout << "Sunday\n";
        break;
        case 3:
        cout << "Monday\n";
        break;
        case 4:
        cout << "Tuesday\n";
        break;
        default:
        cout << "Invalid Input\n";
    }

    int x =5;


    switch(x%2){
        case 0:
        cout << "Even\n";
        break;
        case 1:
        cout << "odd\n";
        break;
    }
}