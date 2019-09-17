#include <cstdio>
int main(){
	int n,temp;
	int st[110]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		st[temp]++;
	}
	scanf("%d",&n);
	bool first=1;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(first){
			printf("%d",st[temp]);
			first=0;
		}
		else printf(" %d",st[temp]);
	}
	return 0;
} 
