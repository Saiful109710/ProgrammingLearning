#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
         int N;
    cin >> N;
    int A[N];

    for(int i=0;i<N;i++){
        cin >> A[i];
    }
   

    
    int B[N];

    for(int i=0;i<N;i++){
        B[i] = A[i];
    }


    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(B[i]<B[j]){
               
            }else{
                 int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }



   
    
    int C[N];
    for(int i=0;i<N;i++){
        C[i] = A[i] - B[i];
    }

    for(int i=0;i<N;i++){
        if(C[i]<0){
            C[i] = -C[i];
        }
        cout << C[i] << " ";
    }
    cout << endl;

    }
   

return 0;
}