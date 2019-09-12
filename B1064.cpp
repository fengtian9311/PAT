#include <cstdio>
int main(){
    int st[40]={0};
    int n,temp;
    bool first =1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        int sum=0;
        while(temp) {
            sum+=temp%10;
            temp/=10;
        }
        st[sum]++;
    }
    int num=0;
    for(int i=0;i<40;i++){
        if(st[i]>0) num++; 
    }
    printf("%d\n",num);
    for(int i=0;i<40;i++){
        if(st[i]>0) {
            if (first) {
                printf("%d",i);
                first=!first;
            }
            else printf(" %d",i); 
        }
    }
    return 0;
}
