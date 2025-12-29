#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]>A[j]){
                int temp = A[i];
                A[i] =A[j];
                A[j] = temp;
            }
            
        }
    }

    for(int i=0;i<N;i++){
        cout << A[i] << " ";
    } 
    cout << endl;

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]<A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for(int i=0;i<N;i++){
        cout << A[i] << " ";
    }

return 0;
}