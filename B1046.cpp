#include <cstdio>
int main(){
	int n,d1=0,d2=0;
	scanf("%d",&n);
	int num[n][4];
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&num[i][0],&num[i][1],&num[i][2],&num[i][3]);
	}
	for(int i=0;i<n;i++){
		if(num[i][1]==num[i][0]+num[i][2]&&num[i][1]!=num[i][3])  d2++;
		if(num[i][3]==num[i][0]+num[i][2]&&num[i][1]!=num[i][3])  d1++;
	}
	printf("%d %d\n",d1,d2);
	return 0;
}
