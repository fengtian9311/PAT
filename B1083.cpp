#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int data[n];
	int dis[n];
	int st[10000]={0};
	for(int i=0;i<n;i++) scanf("%d",&data[i]);
	for(int i=0;i<n;i++){
		dis[i]=data[i]-(i+1);
		if(dis[i]<0) dis[i]=-dis[i];
		st[dis[i]]++;
	}	
	for(int i=10000;i>=0;i--){
		if(st[i]>=2) printf("%d %d\n",i,st[i]);
	}
	return 0;
}
