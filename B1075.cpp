#include <bits/stdc++.h>
using namespace std;
struct node{
    int add,data,next_add;
};
map<int,node> mp;
vector<node*> s1,s2,s3;
int main(){
    int first_add,n,k,temp_add,temp_data,temp_next_add;
    cin>>first_add>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&temp_add,&temp_data,&temp_next_add);
        //cin>>temp_add>>temp_data>>temp_next_add;
        mp[temp_add].add=temp_add;
        mp[temp_add].data=temp_data;
        mp[temp_add].next_add=temp_next_add;
    }
    for(int i=first_add;i!=-1;){
        if(mp[i].data<0) s1.push_back(&mp[i]);
        if(mp[i].data<=k&&mp[i].data>=0) s2.push_back(&mp[i]);
        if(mp[i].data>k) s3.push_back(&mp[i]);
        i=mp[i].next_add;
    }
    for(int i=0;i<max(int(s1.size()-1),0);i++) s1[i]->next_add=s1[i+1]->add;
    for(int i=0;i<max(int(s2.size()-1),0);i++) s2[i]->next_add=s2[i+1]->add;
    for(int i=0;i<max(int(s3.size()-1),0);i++) s3[i]->next_add=s3[i+1]->add;
    if(s1.empty()+s2.empty()+s3.empty()==0){
        s1.back()->next_add=s2.front()->add;
        s2.back()->next_add=s3.front()->add;
        s3.back()->next_add=-1;
        first_add=s1.front()->add;
    } 
    if(s1.empty()+s2.empty()+s3.empty()==1){
        vector<node*> *p1,*p2;
        p1=(!s1.empty()?&s1:&s2);
        p2=(!s3.empty()?&s3:&s2);
        p1->back()->next_add=p2->front()->add;
        p2->back()->next_add=-1;
        first_add=p1->front()->add;
    }
    for(temp_add=first_add;mp[temp_add].next_add!=-1;) {
        printf("%05d %d %05d\n",temp_add,mp[temp_add].data,mp[temp_add].next_add);
        //cout<<setw(5)<<setfill('0')<<temp_add<<" "<<mp[temp_add].data<<" "<<setw(5)<<setfill('0')<<mp[temp_add].next_add<<endl;
        temp_add=mp[temp_add].next_add;
    }
    cout<<setw(5)<<setfill('0')<<temp_add<<" "<<mp[temp_add].data<<" "<<mp[temp_add].next_add;
    return 0;
}


