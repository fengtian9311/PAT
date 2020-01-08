#include <bits/stdc++.h>
using namespace std;
struct School{
    int rank,score_a,score_b,score_t,num,tot_score;
    string id;
};
map<string,School> mp;
vector<School> out_school;
bool cmp(School a,School b){
    if (a.tot_score!=b.tot_score) return a.tot_score>b.tot_score;
    if (a.num!=b.num) return a.num<b.num;
    return a.id<b.id;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string id,school_,lv;
        int score;
        cin>>id>>score>>school_;
        lv=id.substr(0,1);
        for(auto &c:school_) if(isupper(c)) c+=32;
        mp[school_].id=school_;
        mp[school_].num++;
        if(lv=="A")  mp[school_].score_a+=score;
        if(lv=="B")  mp[school_].score_b+=score;
        if(lv=="T")  mp[school_].score_t+=score;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        out_school.push_back(i->second);
    }
    int cnt=out_school.size();
    for(auto &i:out_school){
        i.tot_score=i.score_b/1.5+i.score_a+i.score_t*1.5;
    }
    sort(out_school.begin(),out_school.end(),cmp);
    out_school[0].rank=1;
    for(int i=1;i<cnt;i++){
        if(out_school[i].tot_score==out_school[i-1].tot_score) out_school[i].rank=out_school[i-1].rank;
        else out_school[i].rank=i+1;
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<out_school[i].rank<<' '<<out_school[i].id<<' '<<out_school[i].tot_score<<' '<<out_school[i].num<<endl;
    }
    return 0;
}