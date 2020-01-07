#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
struct Player{
    int rank,id;
    string prizes;
    bool is_queried=0; 
}player[10010];
bool is_prime(int num){
    if(num<2) return 0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return 0;
    }
    return 1;
}
string get_prizes(int rank){
    if(rank==1) return "Mystery Award";
    else if(is_prime(rank)) return "Minion";
    else return "Chocolate";
}
int main(){
    int n;
    cin>>n;
    int temp_id;
    for(int i=0;i<n;i++){
        cin>>temp_id;
        player[i].rank=i+1;
        player[i].id=temp_id;
        player[i].prizes=get_prizes(i+1);
        mp[temp_id]=i;
    }
    int k;
    cin>>k;
    for(int j=0;j<k;j++){
        cin>>temp_id;
        auto i=mp.find(temp_id);
        if(i!=mp.end()){
            if(!player[mp[temp_id]].is_queried){
                cout<<setw(4)<<setfill('0')<<player[mp[temp_id]].id<<": "<<player[mp[temp_id]].prizes<<endl;
                player[mp[temp_id]].is_queried=1;
            }
            else cout<<setw(4)<<setfill('0')<<player[mp[temp_id]].id<<": Checked"<<endl;
    
        }
        else cout<<setw(4)<<setfill('0')<<temp_id<<": Are you kidding?"<<endl;     
    }
    return 0;
}