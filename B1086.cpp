#include <cstdio>
int main(){
    int a,b,c;
    int num[1000010];
    scanf("%d %d",&a,&b);
    c=a*b;
    int i=0;
    for(i=0;c;i++){
        num[i]=c%10;
        c/=10;
    }
    int sum=0;
    for(int j=0;j<i;j++){
        sum=sum*10+num[j] ;
    }
    printf("%d",sum);
    return 0;
}
