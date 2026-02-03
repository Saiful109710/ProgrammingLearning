#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    vector<int>c;
    for(int i:b){
        c.push_back(i);
    }
    for(int i:a){
        c.push_back(i);
    }

    for(int i:c){
        cout << i << " ";
    }
return 0;
}