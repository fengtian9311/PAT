#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std; 
struct st {
	char id[14];
	int score;
	int location;
	int l_rank;
	int rank;
}stu[30000];	
bool cmp_in(struct st a,struct st  b){
	return  a.score>b.score||(a.score==b.score&&strcmp(a.id,b.id)<0);
} 
int main(){
	int sum=0;
	int n,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int num;
		scanf("%d",&num);
		for(int j=0;j<num;j++,sum++){
			scanf("%s %d",&stu[sum].id,&stu[sum].score);
			stu[sum].location=i+1;
		}
		sort(&stu[sum-num],&stu[sum],cmp_in);
		temp=sum-num; 
		for(int i=sum-num;i<sum;i++){
			if(stu[i].score<stu[i-1].score&&i>sum-num){
				temp=i;
				stu[i].l_rank=temp-(sum-num)+1;
			}
			else stu[i].l_rank=temp-(sum-num)+1;
		} 	
	}
	sort(&stu[0],&stu[sum],cmp_in);
	temp = 0;
	for(int i=0;i<sum;i++){
		if(stu[i].score<stu[i-1].score&&i>0){
			temp=i;
			stu[i].rank=i+1;
		}
			else stu[i].rank=temp+1;
	} 	
	printf("%d\n",sum);
	for(int i=0;i<sum;i++) printf("%s %d %d %d\n",stu[i].id,stu[i].rank,stu[i].location,stu[i].l_rank);
	return 0;
} 
