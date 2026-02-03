#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N;
int A[N];
for(int i=0;i<N;i++){
    cin >> A[i];
}

int flag = 0;

sort(A,A+N);
int i=0;
int j=i+1;
while(j<N){
    if(A[i]==A[j]){
        flag = 1;
    }
    i++;
    j++;
}

if(flag == 1){
    cout << "YES";
}else{
    cout << "NO";
}
return 0;
}