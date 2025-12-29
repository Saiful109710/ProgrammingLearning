#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
long long cntE = 0,cntY = 0,cntG = 0,cntP=0,cntT=0;
for(char c:s){
    c = toupper(c);
    if(c=='E')cntE++;
    else if(c=='Y')cntY++;
    else if(c=='G')cntG++;
    else if(c=='P')cntP++;
    else if(c=='T')cntT++;
}

long long ans  = min({cntE,cntY,cntG,cntP,cntT});
  cout << ans << endl;


return 0;
}