#include<bits/stdc++.h>
using namespace std;
int main(){
string sentence;
getline(cin,sentence);
string s;

cin >> s;

stringstream ss(sentence);
string word;
int count = 0;
while(ss >> word){
    if(word==s){
        count++;
    }
}

cout << count << endl;

return 0;
}