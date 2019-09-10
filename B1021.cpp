#include <cstdio>
int main(){
	char num[1000];
	int n;
	int count[10]={0};
	scanf("%s",&num);
	for(int i=0;num[i];i++){
		n=num[i]-'0';
		count[n]++;
	}
	for(int i=0;i<10;i++){
		if(count[i]) printf("%d:%d\n",i,count[i]);
	}
	return 0;
} 
