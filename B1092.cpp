#include<bits/stdc++.h>
using namespace std;
int tot_num[1010];
int main(){
    int n,m,temp;   //n种类，m城市
    cin>>n>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>temp;
            tot_num[j]+=temp;
        }
    }
    int max=-1;
    for(int j=0;j<n;j++){
        if(tot_num[j]>max) max=tot_num[j];
    }
    cout<<max<<endl;
    bool first=1;
    for(int j=0;j<n;j++){
        if(tot_num[j]==max) {
            if(first){
                cout<<j+1;
                first=0;
            }
            else cout<<' '<<j+1;
        }
    }
    return 0;
}