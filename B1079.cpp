#include <bits/stdc++.h>
using namespace std;
string strrev(string s){
    string temp="";
    for(int i=s.size();i>=0;i--){
        temp+=s.substr(i,1);
    }
    return temp;
}
string stradd(string s1,string s2){
    string out="";
    vector<string> dig;
    bool bit=0;
    for(int i=0;i<s1.size();i++){
        string ss="0";
        int num=bit+s1[i]+s2[i]-2*'0';
        bit=num/10;
        num%=10;
        ss[0]+=num;
        dig.push_back(ss);
    }
    if(bit){
        string ss="1";
        dig.push_back(ss);
    }
    while(!dig.empty()){
        out+=dig.back();
        dig.pop_back();
    }
    return out;
}
bool is_palind(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]) return 0;
    }
    return 1;
}

int main(){
    string s1,s2,s3;
    cin>>s1;
    int i;
    for(i=0;i<10;i++){
        if(is_palind(s1)){
            cout<<s1<<" is a palindromic number.";
            break;
        }
        s2=strrev(s1);
        s3=stradd(s1,s2);
        cout<<s1<<" + "<<s2<<" = "<<s3<<endl;
        s1=s3;
    }
    if(i==10) cout<<"Not found in 10 iterations.";
    return 0;
}