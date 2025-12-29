#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    while(T--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int even = 0;
        if(n %2 !=0){
            cout << -1 << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
        }
        int target = n/2;
        int operations = abs(even-target);
        cout << operations << endl;
    }
return 0;
}