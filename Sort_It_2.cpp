#include<bits/stdc++.h>
using namespace std;


int* sort_it(int N){
    int *A = new int[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]<A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    return A;
}
int main(){
int N;
cin >> N;
 int *A = sort_it(N);

 for(int i=0;i<N;i++){
    cout << A[i] << " ";
 }

return 0;
}