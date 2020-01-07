#include <bits/stdc++.h>
using namespace std;
int main(){
    string answer;
    int n;
    cin>>answer>>n;
    cin.ignore();
    string input;
    int i=0;
    for(i=0;i<n;i++){
        getline(cin,input);
        if(input=="#") break;
        if(input==answer) {
            cout<<"Welcome in"<<endl;
            break;
        }
        else{
            cout<<"Wrong password: "<<input<<endl;
        }
    }
    if(i==n) cout<<"Account locked"<<endl;
    return 0;
}