#include <bits/stdc++.h>
using namespace std;
struct Studen{
    string id;
    int gp=-1,gm=-1,gf=-1;
    int g;
}studen[30010];
map<string,int> mp;
bool cmp(struct Studen a,struct Studen b){
    if(a.g==b.g) return a.id<b.id;
    else return a.g>b.g;
}

int main(){
    int p,m,n;
    cin>>p>>m>>n;
    int cnt=0,temp;
    string temp_id;
    for(int i=0;i<p;i++){
        cin>>temp_id>>temp;
        mp[temp_id]=cnt;
        studen[cnt].id=temp_id;
        studen[cnt].gp=temp;
        cnt++;
    }
    for(int i=0;i<m;i++){
        cin>>temp_id>>temp;
        if(!mp.count(temp_id)){
            studen[cnt].id=temp_id;
            studen[cnt].gm=temp;
            cnt++;
        }
        else studen[mp[temp_id]].gm=temp; 
    }
    for(int i=0;i<n;i++){
        cin>>temp_id>>temp;
        if(!mp.count(temp_id)){
            studen[cnt].id=temp_id;
            studen[cnt].gf=temp;
            cnt++;
        }
        else studen[mp[temp_id]].gf=temp; 
    }
    vector <struct Studen> out;
    for(int i=0;i<cnt;i++){
        if(studen[i].gp>=200){
            studen[i].g=(studen[i].gm>studen[i].gf) ? round(studen[i].gm*0.4+studen[i].gf*0.6):studen[i].gf;
            if(studen[i].g>=60) out.push_back(studen[i]);
        }
    }
    sort(&out[0],&out[out.size()],cmp);
    for(auto i:out){
        cout<<i.id<<' '<<i.gp<<' '<<i.gm<<' '<<i.gf<<' '<<i.g<<endl;
    }
    return 0;
}