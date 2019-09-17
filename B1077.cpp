#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	double out[n];
	int sum[n]={0} ;
	int count[n]={0};
	int num[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&num[i][j]);
			if(num[i][j]>m||num[i][j]<0) num[i][j]=m+1;
			else count[i]++;
		}
	}
	for(int i=0;i<n;i++) sort(&num[i][1],&num[i][n]);
	for(int i=0;i<n;i++){
		for(int j=2;j<count[i]-1;j++) sum[i]+=num[i][j];	
	}
	for(int i=0;i<n;i++) out[i]=sum[i]/(2*double(count[i]-3))+num[i][0]/2.0;
	for(int i=0;i<n;i++) printf("%0.lf\n",round(out[i]));
	return 0;
}
