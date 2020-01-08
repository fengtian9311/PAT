#include <cstdio>
int main(){
	int N,D;
	double e;
	scanf("%d %lf %d",&N,&e,&D);
	int K;
	int cnt_s1=0,cnt_s2=0;
	for(int i=0;i<N;i++){
		scanf("%d",&K);
		int cnt=0;
		double data;
		for(int j=0;j<K;j++){
			scanf("%lf",&data);
			if(data<e) cnt++;
		}
		if(2*cnt>K){
			cnt_s1++;
			if(K>D){
				cnt_s2++;
				cnt_s1--;
			} 
		}
	}
	printf("%.1lf%% %.1lf%%",100*cnt_s1/(double) N,100*cnt_s2/(double) N);
	return 0;
}
