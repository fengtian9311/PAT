#include <cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int dis[n];
	int dis_sum[n];
	dis_sum[0]=0;
    int totol=0;
    for(int i=0;i<n;i++){
        scanf("%d",&dis[i]);
        totol+=dis[i];
        if(i>0) dis_sum[i]=dis_sum[i-1]+dis[i-1];
    }
    int k;
    scanf("%d",&k);
    int a,b,temp,out[n];
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        int sum1,sum2;
        if(a>b){
            temp=b;
            b=a;
            a=temp;
        }
        sum1=dis_sum[b-1]-dis_sum[a-1];
        sum2=totol-sum1;
    	out[i]=(sum1<sum2)?sum1:sum2;
    }
    for(int i=0;i<k;i++) printf("%d\n",out[i]);
    return 0;
}
