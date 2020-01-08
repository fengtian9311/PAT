#include<bits/stdc++.h>
using namespace std;
int trans[10]={10,1,2,3,4,5,6,7,8,9};
int main(){
    string up,s1,s2;
    cin>>up>>s1>>s2;
    int bit=0;
    vector<string> out;
    while(s1.size()||s2.size()){
        int k=trans[up.back()-'0'];
        int a=s1.size()?s1.back()-'0':0;
        int b=s2.size()?s2.back()-'0':0;
        int sum=a+b+bit;
        bit=sum/k;
        sum=sum%k;
        out.push_back(to_string(sum));
        if(!s1.empty()) s1.erase(s1.size()-1);
        if(!s2.empty()) s2.erase(s2.size()-1);
        if(!up.empty()) up.erase(up.size()-1);
    }
    if(bit==1) out.push_back(to_string(bit));
    while(out.back()=="0") out.pop_back();   
    if(out.size()==0) cout<<"0";   
    while(!out.empty()) {
        cout<<out.back();
        out.pop_back();
    }
    return 0;
}