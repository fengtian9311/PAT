#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> data;
    map<string,bool> mp;
    int m,n,s;
    cin>>m>>n>>s;
    string temp_id;
    for(int i=0;i<m;i++) {
        cin>>temp_id;
        data.push_back(temp_id);
        mp[temp_id]=0;
    }
    int cnt=0;
    for(int i=s-1;i<m;){
        if(!mp[data[i]]){
            cout<<data[i]<<endl;
            cnt++;
            mp[data[i]]=1;
            i+=n;
        }
        else i++;
    }
    if(!cnt) cout<<"Keep going...";
    return 0;
}