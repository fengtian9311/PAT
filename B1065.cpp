#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int temp1,temp2;
        cin>>temp1>>temp2;
        mp[temp1]=temp2;
        mp[temp2]=temp1;
    }
    int m;
    cin>>m;
    set<int> data;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        auto p=(data.find(mp[temp]));
        if(p!=data.end()) data.erase(p);
        else data.insert(temp);
    }
    cout<<data.size()<<endl;
    bool first=1;
    for(auto i=data.begin();i!=data.end();i++){
        if(first){
            cout<<setw(5)<<setfill('0')<<*i;
            first=0;
        }
        else  cout<<' '<<setw(5)<<setfill('0')<<*i;
    }
    return 0;
}