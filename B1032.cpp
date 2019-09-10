#include <cstdio>
int main(){
	int n;
	scanf("%d",&n); 
	int sum[n]={0}; 
	int id,score,max_id=1,max_score=0;
	while(n--){
		scanf("%d%d",&id,&score);
		sum[id-1]+=score;
		if(sum[id-1]>max_score){
			max_id=id;
			max_score=sum[id-1];
		} 
	}
	printf("%d %d",max_id,max_score);
} 
