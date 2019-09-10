#include <cstdio>
int main(){
	int n;
	(void)scanf("%d",&n);
	long long int num[n][3];
	for(int i=0;i<n;i++){
		(void)scanf("%lld%lld%lld",&num[i][0],&num[i][1],&num[i][2]);
	}
	for(int i=0;i<n;i++){
		printf("Case #%d: ",i+1);
		if(num[i][0]+num[i][1]>num[i][2]) printf("true\n");
		else printf("false\n") ;
	}
	return 0;
}
