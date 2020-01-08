#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int N;
	scanf("%d",&N);
	int data[N],data_cp[N];
	for(int i=0;i<N;i++){
		scanf("%d",&data[i]);
		data_cp[i]=data[i];
	}
	sort(&data_cp[0],&data_cp[N]);
	int cnt=0,max=0,out[N];
	for(int i=0;i<N;i++){
		if(data[i]>max){
			max=data[i];
			if(data_cp[i]==data[i]) out[cnt++]=data[i];
		}
	}
	printf("%d\n",cnt);
	bool first=1;
	for(int i=0;i<cnt;i++){
		if(first){
			printf("%d",out[i]);
					first=0;
		}
		else{
			printf(" %d",out[i]);
		}
	}
	printf("\n");
	return 0;
}
