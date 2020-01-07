#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main(){
    int n1,m1,n2,m2,k;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    double f1=n1/(double)m1,f2=n2/(double)m2;
    bool first=1;
    for(int i=1;;i++){
        double min_mun=min(f1,f2);
        double max_mun=max(f1,f2);
        double f=i/(double)k;
        if(gcd(k,i)==1&&f>min_mun&&f<max_mun){
            if(first){
                cout<<i<<"/"<<k;
                first=0;
            }
            else{
                cout<<" "<<i<<"/"<<k;
            }            
        }
        if(f>=max_mun) break;
    }
    return 0;
}