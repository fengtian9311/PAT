#include <cstdio>
#include <cmath>
int main(){
    int n1,n2;
    int t,hh,mm,ss;
    scanf("%d %d",&n1,&n2);
    t=(int)round((n2-n1)/100.0);
    ss=t%60;
    t/=60;
    mm=t%60;
    t/=60;
    hh=t;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
