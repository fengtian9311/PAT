#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int N;
	scanf("%d",&N);
	int num[N];
	for(int i=0;i<N;i++) scanf("%d",&num[i]);
	sort(num,num+N,cmp);
	int m,n;
	for(int i=(int)(floor(sqrt(N)));i>=1;i--) {
		if(N%i==0){
			n=i;
			m=N/i;
			break;
		}
	}
	int out[m][n];
	memset(out,0,sizeof(out));
	int mode=0;
	int p=0,q=0;
	for(int i=0;i<N;i++){
		out[p][q]=num[i];
		if(mode==0){ 
			if(out[p][q+1]==0&&q+1<n) {
				q++;
				continue; 
			}
			else mode++;
			
		}
		if(mode==1){ 
			if(out[p+1][q]==0&&p+1<m){
				p++;
				continue;
			}
			else mode++;
		}
		if(mode==2){ 
			if(out[p][q-1]==0&&q-1>=0) {
				q--;
				continue;	
			}
			else mode++;
		}
		if(mode==3){ 
			if(out[p-1][q]==0&&p-1>=0){
				p--;
				continue;
			}
			else mode=0,q++;
		}	
	}
	
	for(int i=0;i<m;i++){
		bool first=1;
		for(int j=0;j<n;j++){
			if(first){
				printf("%d",out[i][j]);
				first=0;
			}
			else printf(" %d",out[i][j]);
		}
		printf("\n");
	}
	return 0; 
} 

