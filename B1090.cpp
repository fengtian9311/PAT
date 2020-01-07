#include <bits/stdc++.h>
using namespace std;
set<int> goods_list[100010];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int id1,id2;
        cin>>id1>>id2;
        goods_list[id1].insert(id2);
        goods_list[id2].insert(id1);
    }
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        int do_list[num];
        for(int j=0;j<num;j++) cin>>do_list[j];
        bool is_good=1;
        for(int j=0;j<num&is_good;j++){
            for(int k=j+1;k<num&is_good;k++){
                if(goods_list[do_list[j]].count(do_list[k])){
                    is_good=0;
                    break;
                }
            }
        }
        if(is_good) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}