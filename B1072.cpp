#include <cstdio>
int main(){
	int n,m;
	bool illegal[10000]={0};
	scanf("%d %d",&n,&m);
	int temp;
	for(int i=0;i<m;i++){
		scanf("%d",&temp); 
		illegal[temp]=1;	
	}
	struct student{
		char name[5];
		int item_num;
		int items[10];
		bool is_wrong;
	}stu[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",&stu[i].name,&stu[i].item_num);
		stu[i].is_wrong=0;
		for(int j=0;j<stu[i].item_num;j++){
			scanf("%d",&stu[i].items[j]);
			if(illegal[stu[i].items[j]]) stu[i].is_wrong=1;
		} 
	}
	int cnt_st=0,cnt_items=0;
	for(int i=0;i<n;i++){
		if(stu[i].is_wrong){
			cnt_st++;
			printf("%s:",stu[i].name);
			for(int j=0;j<stu[i].item_num;j++){
				if(illegal[stu[i].items[j]]){
					printf(" %04d",stu[i].items[j]);
					cnt_items++;
				}
			}
			printf("\n");
		}
	}
	printf("%d %d",cnt_st,cnt_items);	
	return 0; 
	
} 
