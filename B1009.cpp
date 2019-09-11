#include <cstdio>
int main(){
	int i=0;
	bool flag=1;
	char input[81][81];
	while(scanf("%s",input[i])!=EOF){
		i++;
	}
	for(;i>0;i--){
		if(flag) {
			printf("%s",input[i-1]);
			flag=0;	
		}
		else printf(" %s",input[i-1]);
	}
	return 0;
} 
