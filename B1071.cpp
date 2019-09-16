#include <cstdio>
int main(){
	int total,n;
	scanf("%d %d",&total,&n);
	int input[n][4];
	int n1,b,t,n2;
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&input[i][0],&input[i][1],&input[i][2],&input[i][3]);
	}
	for(int i=0;i<n;i++){	

		if(total==0){
			printf("Game Over.");
			break; 
		}
		if(input[i][2]>total){
			printf("Not enough tokens.  Total = %d.\n",total);
			continue;
		}
		if((input[i][0]<input[i][3]&&input[i][1])||(input[i][0]>input[i][3]&&!input[i][1])) {
			total+=input[i][2];
			printf("Win %d!  Total = %d.\n",input[i][2],total);
		}
		if((input[i][0]<input[i][3]&&!input[i][1])||(input[i][0]>input[i][3]&&input[i][1])) {
			total-=input[i][2];
			printf("Lose %d.  Total = %d.\n",input[i][2],total);
		}
	}
    return 0;
}
