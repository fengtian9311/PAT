#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num);
int main(){
    int l,k;
    cin>>l>>k;
    string line;
    cin.ignore();
    cin>>line;
    bool is_find=0;
    for(int i=0;i+k-1<l&&!is_find;i++){
        int num=stoi(line.substr(i,k));
        if(is_prime(num)){
            cout<<setw(k)<<setfill('0')<<num;
            is_find=1;
        }
    }
    if(!is_find) cout<<"404";
    return 0;
}
bool is_prime(int num){
    if(num<2) return 0;
    int max=sqrt(num);
    for(int i=2;i<=max;i++){
        if(num%i==0) return 0;
    }
    return 1;
}