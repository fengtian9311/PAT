#include <bits/stdc++.h>
using namespace std;
int input[1010][1010];
int direction[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
map<int,int> mp;
int main(){
    //ios::sync_with_stdio(0);
    int m,n,tol;
    cin>>m>>n>>tol;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>input[i][j];
            mp[input[i][j]]++;
        }
    }
    int cnt=0;
    int x,y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            bool vaild=1;
            if(mp[input[i][j]]>1) vaild=0;
            for(int k=0;k<8&&vaild;k++){
                int ii=i+direction[k][0];
                int jj=j+direction[k][1];
                if(abs(input[i][j]-input[ii][jj])<=tol) vaild=0;
            }
            if(vaild&&cnt==0){
                cnt++;
                x=i;
                y=j;
            }
            else if(vaild&&cnt!=0){
                cout<<"Not Unique";
                return 0;
            }
        }
    }
    if(cnt==0) cout<<"Not Exist";
    else cout<<"("<<y<<", "<<x<<"): "<<input[x][y];
    return 0;
} 