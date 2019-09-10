#include <cstdio>
#include <cmath>
int main(){
	int n,l;
	char c;
	scanf("%d %c",&n,&c);
	l=ceil(n/2.0);
	for(int i=0;i<l;i++){
		if(i==0||i==l-1){
			for(int j=0;j<n;j++) printf("%c",c);
			printf("\n");
		}
		else{
			printf("%c",c);
			for(int j=0;j<n-2;j++) printf(" ");
			printf("%c\n",c);
		} 
	} 
	return 0;
} 
