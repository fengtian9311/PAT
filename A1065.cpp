#include <cstdio>
int main(){
    int n,_a,_b,_c;
    long long int a,b,c;
    scanf("%d",&n);
    bool out[n];
    for(int i=0;i<n;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        _a=a%2;
        _b=b%2;
        _c=c%2;
        if(a/2+b/2+(_a+_b)/2>(c/2)||(a/2+b/2+(_a+_b)/2==(c/2))&&(_a+_b)%2>_c) out[i]=1;
        else out[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("Case #%d: ",i+1);
        if(out[i]) printf("true\n");
        else printf("false\n");
    }
    return 0;
}
