#include <bits/stdc++.h>
using namespace std;
vector<pair<int,string>> input_data;
void print_line(int start,int num);
bool cmp(pair<int,string> a,pair<int,string> b);
int main(){
    int n,k;
    cin>>n>>k;
    int height;
    string name;
    for(int i=0;i<n;i++){
        cin>>name>>height;
        input_data.push_back(make_pair(height,name));
    }
    sort(&input_data[0],&input_data[n],cmp);

    for(int i=k;i>0;i--){
        int num=n/k;
        if(i==k) num=n-(n/k)*(k-1);
        int start=(i-1)*(n/k);
        print_line(start,num);
    }
    return 0;
}

void print_line(int start,int num){
    if(!(num%2)) {
        input_data.insert(input_data.begin()+start,make_pair(0,""));
        num++;
    }
    if(num==1){
        cout<<input_data[start].second<<endl;
        return;
    }
    for(int i=1;i<num;){
        if(i==1) cout<<input_data[start+i].second;
        else cout<<' '<<input_data[start+i].second;
        i+=2;
        }
    for(int i=num-1;i>=0;){
        if(input_data[start+i].second!="") cout<<' '<<input_data[start+i].second;
        i-=2;
    }   
    cout<<endl; 
}
bool cmp(pair<int,string> a,pair<int,string> b){
    if(a.first==b.first) return (a.second>b.second);
    else return a.first<b.first;
}