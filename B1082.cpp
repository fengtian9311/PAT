#include <cstdio>
#include <cmath>
int main(){
	int n,max_id,min_id,temp_id,x,y;
	double max_dis=0.0,min_dis=200.0,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&temp_id,&x,&y);
		temp=sqrt(x*x+y*y);
		if(temp>max_dis){
			max_dis= temp; 
			min_id=temp_id ;
		}
		if(temp<min_dis){
			min_dis= temp; 
			max_id=temp_id ;
		}	
	}
	printf("%04d %04d",max_id,min_id);
	return 0;
} 
