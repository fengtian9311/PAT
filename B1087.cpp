#include <cstdio>
int main(){
    int n;
    scanf("%d",&n);
    bool out[2*n]={0};
    for(int i=1;i<n+1;i++){
        int temp = i/2+i/3+i/5;
        out[temp]=1;
    }
    int count=0; 
    for(int i=0;i<2*n;i++){
        if (out[i]) count++;
    }
    printf("%d",count);
    return 0;
}
