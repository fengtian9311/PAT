#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int N,p;
	scanf("%d %d",&N,&p);
	int data[N];
	for(int i=0;i<N;i++) scanf("%d",&data[i]);
	sort(&data[0],&data[N]);
	int cnt=0;
	for(int i=0;i+cnt-1<N;i++){
		for(int j=i+cnt-1;j<N-1;j++){
			if(p>=data[j]/(double)data[i]&&p>=data[j+1]/(double)data[i]) cnt++;
			else break;
		}
	}
	printf("%d",cnt);
	return 0;
}
