#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int N;
	scanf("%d",&N);
	int data[N],max=0;
	for(int i=0;i<N;i++){
		scanf("%d",&data[i]);
	}
	sort(&data[0],&data[N],cmp);
	while(N){
		if(data[N-1]>N) break;
		N--;
	}
	printf("%d",N);
	return 0;
}
