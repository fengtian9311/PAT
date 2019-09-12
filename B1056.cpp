#include <cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",11*(n-1)*sum);
    return 0;
}
