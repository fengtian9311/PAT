#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    int tem;
    int s1=0,s2=0;
    cin>>a>>b>>c>>d;
    while(a){
        tem = 0;
        tem = a%10;
        if (tem==b) s1=s1*10+b;
        a/=10;
    }
     while(c){
        tem = 0;
        tem = c%10;
        if (tem==d) s2=s2*10+d;
        c/=10;
    }
    cout << s1+s2;
    return 0;

}
