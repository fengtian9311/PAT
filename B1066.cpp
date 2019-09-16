#include <cstdio>
int main(){
	int row,column,a,b,c;
    scanf("%d %d %d %d %d",&row,&column,&a,&b,&c);
    int data[row][column];
    for(int i=0;i<row;i++){
    	for(int j=0;j<column;j++){
    		scanf("%d",&data[i][j]);
    		if(data[i][j]>=a&&data[i][j]<=b){
    			data[i][j]=c;
			}
  	  	}
	}
	 for(int i=0;i<row;i++){
	 	bool first=1;
    	for(int j=0;j<column;j++){
    		if(first){
				printf("%03d",data[i][j]);
				first=0;
			}
			else printf(" %03d",data[i][j]);
		}
		printf("\n");
	}
    return 0;
}
