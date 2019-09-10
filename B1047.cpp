#include <cstdio>
int main(){
	int n,max=-1,id;
	int a,b,c;
	int school[1001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&a,&b,&c);
		school[a]+=c;
		if(school[a]>max){
			max=school[a];
			id=a;
		}	
	}
	printf("%d %d\n",id,max);
	return 0;
}
