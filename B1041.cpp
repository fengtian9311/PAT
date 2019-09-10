#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	struct student{
		char id[17];
		int seat1;
		int seat2;
	}stu[n];
	for(int i=0;i<n;i++){
		scanf("%s %d %d",&stu[i].id,&stu[i].seat1,&stu[i].seat2) ;		
	}
	int n_find,n_seat;
	scanf("%d",&n_find);
	while(n_find--){
		scanf("%d",&n_seat);
		for(int i=0;i<n;i++){
			if(stu[i].seat1==n_seat){
				printf("%s %d\n",stu[i].id,stu[i].seat2);
				break;
			}
		}
	}
	return 0;	
} 
