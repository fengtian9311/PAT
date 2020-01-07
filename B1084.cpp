#include<bits/stdc++.h>
using namespace std;
int main(){
    string d[45];
    int n;
    cin>>d[1]>>n;
    for(int i=1;i<n;i++){
        int cnt=0;
        string out="";
        bool first=1;
        char t;
        for(int j=0;j<=d[i].size();j++){
            char c=d[i][j];
            if(first){
                cnt++;
                t=c;
                first=0;
            }
            else{
                if(c!=t){
                    string t2(1,t);
                    out+=t2;
                    t2=to_string(cnt);
                    out+=t2;
                    cnt=1;
                    t=c;
                }
                else cnt++;
            }
        }
        d[i+1]=out;
    }
    cout<<d[n];
    return 0;
}