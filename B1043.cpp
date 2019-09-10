#include <cstdio>
int main(){
	int sum[6]={0};
	char s[10001];
	scanf("%s",s);
	int i=0;
	while(s[i]){
		switch(s[i++]){
			case 'P': sum[0]++;break;
			case 'A': sum[1]++;break;
			case 'T': sum[2]++;break;
			case 'e': sum[3]++;break;
			case 's': sum[4]++;break;
			case 't': sum[5]++;break;
			default:break;
		}
	}
	while(sum[0]||sum[1]||sum[2]||sum[3]||sum[4]||sum[5]){
		if(sum[0]) {
			printf("P");
			sum[0]--;	
		}
		if(sum[1]) {
			printf("A");
			sum[1]--;	
		}
		if(sum[2]) {
			printf("T");
			sum[2]--;	
		}
		if(sum[3]) {
			printf("e");
			sum[3]--;	
		}
		if(sum[4]) {
			printf("s");
			sum[4]--;	
		}
		if(sum[5]) {
			printf("t");
			sum[5]--;	
		}	
	}
	return 0;
} 
