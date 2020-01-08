#include <cstdio>
struct node{
	int data,next;
}nd[100010];

int main(){
	int first_add,N,K;
	scanf("%d %d %d",&first_add,&N,&K);
	int add;
	for(int i=0;i<N;i++){
		scanf("%d",&add);
		scanf("%d %d",&nd[add].data,&nd[add].next); 
	}
	int cnt=0; 
	int temp_add=first_add;
	for(int i=0;i<N;i++){
		if(temp_add!=-1){
			cnt++;
			temp_add=nd[temp_add].next;
		}
		else break;
	}
	N=cnt;
	int n=N/K;
	int priro_add=-1;
	int doing_add=first_add;
	int next_add=nd[first_add].next;
	for(int i=0;i<n;i++){
		int first;
		for(int j=0;j<K;j++){
			if(!j)  first=doing_add;	
			nd[doing_add].next=priro_add;
			priro_add=doing_add;
			doing_add=next_add;
			next_add=nd[doing_add].next;
		}
		if(i==n-1){
			nd[first].next=doing_add;
		} 
		else {
			int _k=K-1;
			int _add=doing_add; 
			while(_k--) {
				_add=nd[_add].next;
			}
			nd[first].next=_add;
		}
		if(!i) first_add=priro_add;
	}
	doing_add= first_add; 
	for(int i=0;i<N-1;i++){
		printf("%05d %d %05d\n",doing_add,nd[doing_add].data,nd[doing_add].next);
		doing_add=nd[doing_add].next;
	}
	printf("%05d %d %d",doing_add,nd[doing_add].data,nd[doing_add].next);
	return 0;
}
