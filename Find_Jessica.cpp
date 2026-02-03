#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool found = true;
    while(ss >> word){
        if(word == "Jessica"){
            found = true;
            break;
        }else{
            found = false;
        }
    }
    if(found){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
return 0;
}