#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,Q; 
    cin >> N >> Q;
    vector<long long> A(N+1);
    for(int i = 1;i<=N;i++){
        cin >> A[i];
    }
    vector<long long> pref(N+1);
    pref[1] = A[1];
    for(int i=2;i<=N;i++){
        pref[i] = pref[i-1] + A[i];
    }

 
    while(Q--){
        int L,R;
        cin >> L >> R;
        long long  sum;
        if(L==1){
            sum = pref[R];
        }else{
            sum = pref[R] - pref[L-1];
        }
        cout << sum << endl;
    }
return 0;
}