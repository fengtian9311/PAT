#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int cnt;
    double average=0;
    string s;
    for (int i = 0; i < N; i++){
        cin>>s;
        bool enable=1;
        int pos_dot=-1;
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])&&s[i]!='.'&&s[i]!='-'){
                enable=0;
                continue;
            }
            if(s[i]=='.'&&pos_dot!=-1){
                enable=0;
                continue;
            }
            if(s[i]=='.'&&pos_dot==-1){
                pos_dot=i;
                if(s.size()-i>3){
                    enable=0;
                    continue;
                }
            }
        }
        stringstream ss(s);
        double t;
        ss>>t;
        if(t>1000||t<-1000){
            enable=0;
        }
        if(enable){
            cnt++;
            average+=(t-average)/cnt;
        }
        else cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
    }
    cout<<"The average of "<<cnt;
    if(cnt==1) cout<<" number is ";
    else cout<<" numbers is ";
    if(cnt==0) cout<<"Undefined"<<endl;
    else cout<<fixed<<setprecision(2)<<average<<endl;
    return 0;
}