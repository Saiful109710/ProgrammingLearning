#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string contry;
    int jersey;
    Cricketer(string contry,int jersey){
        this->contry = contry;
        this->jersey = jersey;
    }
};
int main(){
    Cricketer *dhoni = new Cricketer("India",7);
    Cricketer *kohli = new Cricketer("India",100);
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->jersey << " " << kohli->contry << endl;
return 0;
}