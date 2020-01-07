#include <bits/stdc++.h>
using namespace std;
struct Student{
    string raw_id;
    string lv;
    int class_room,date,id,score;
}student[10010];
int classroom_num[2][1000];
bool cmp(struct Student a,struct Student b){
    if(a.lv==b.lv){
        if(a.score==b.score) return a.raw_id<b.raw_id;
        else return a.score>b.score;
    }
    else return a.lv<b.lv;
}
bool cmp2(pair<int ,int> a,pair<int ,int> b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}
int main(){
    //ios::sync_with_stdio(0);
    int n,m;
    int cnt_a=0,cnt_b=0,cnt_t=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string t;
        cin>>t>>student[i].score;
        student[i].raw_id=t;
        student[i].lv=t.substr(0,1);
        if(student[i].lv=="A") cnt_a++;
        if(student[i].lv=="B") cnt_b++;
        if(student[i].lv=="T") cnt_t++;
        student[i].class_room=stoi(t.substr(1,3));
        classroom_num[0][student[i].class_room]++;
        classroom_num[1][student[i].class_room]+=student[i].score;
        student[i].date=stoi(t.substr(4,6));
        student[i].id=stoi(t.substr(10,3));
    }
    sort(&student[0],&student[n],cmp);
    for(int i=0;i<m;i++){
        int type;
        cin>>type;
        if(type==1){
            string s;
            cin>>s;
            int start,length=0;
            if(s=="A"){
                start=0;
                length=cnt_a;
            }
            if(s=="B"){
                start=cnt_a;
                length=cnt_b;
            }
            if(s=="T"){
                start=cnt_a+cnt_b;
                length=cnt_t;
            }
            cout<<"Case "<<i+1<<": "<<type<<' '<<s<<endl;
            for(int j=0;j<length;j++){
                printf("%s %d\n",student[j+start].raw_id.c_str(),student[j+start].score);
                //cout<<student[j+start].raw_id<<' '<<student[j+start].score<<endl;
            }
            if(length==0) cout<<"NA"<<endl;
        }
        if(type==2){
            int id;
            cin>>id;
            cout<<"Case "<<i+1<<": "<<type<<' '<<setw(3)<<setfill('0')<<id<<endl;
            if(classroom_num[0][id]) cout<<classroom_num[0][id]<<' '<<classroom_num[1][id]<<endl;
            else cout<<"NA"<<endl;
        }
        if(type==3){
            int input_date;
            cin>>input_date;
            vector<pair<int,int>> data_list;
            int num_class[1000];
            memset(num_class,0,sizeof(num_class));
            for(int j=0;j<n;j++){
                if(student[j].date==input_date) num_class[student[j].class_room]++;
            }
            for(int j=0;j<1000;j++){
                if(num_class[j]) data_list.push_back(make_pair(j,num_class[j]));
            }
            sort(&data_list[0],&data_list[data_list.size()],cmp2);
            cout<<"Case "<<i+1<<": "<<type<<' '<<setw(6)<<setfill('0')<<input_date<<endl;
            for(int j=0;j<data_list.size();j++){
                //cout<<data_list[j].first<<' '<<data_list[j].second<<endl;
                printf("%d %d\n",data_list[j].first,data_list[j].second);
            }
            if(!data_list.size()) cout<<"NA"<<endl;
        }
    }
    return 0;
}