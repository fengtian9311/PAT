#include <bits/stdc++.h>
using namespace std;
int m,x,y;
void link_print(int num){
    if(num>m) cout<<" Cong";
    if(num==m) cout<<" Ping";
    if(num<m) cout<<" Gai";
}
int main(){
    cin>>m>>x>>y;
    int a,b;
    double c;
    for(a=99;a>9;a--){
        b=(a%10)*10+a/10;
        int d=abs(a-b);
        if(d*y==b*x) {
            c=d/(double)x;
            cout<<a;
            link_print(a);
            link_print(b);
            if(c>(int)c) c+=1;
            link_print(c);
            break;
        }
    }
    if(a==9) cout<<"No Solution";
    return 0;
}
