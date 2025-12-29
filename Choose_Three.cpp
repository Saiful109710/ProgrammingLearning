#include<bits/stdc++.h>
using namespace std;
int main(){
int T;
cin >>T;
while(T--){
    int N,S;
    cin >> N;
    cin >> S;
    
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    

    if(N<3){
        cout << "NO" << endl;
        continue;;
    }

    int flag=0;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                int sum = A[i] + A[j] + A[k];
                if(sum==S){
                    flag=1;
                }
            }
        }
    }

    if(flag){
        cout << "YES" << endl;

    }else{
        cout << "NO" << endl;
    }

    
}
return 0;
}