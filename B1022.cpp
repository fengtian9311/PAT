#include <cstdio>
int main(){
	int a,b,c,sum;
	int digit[50];
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b;
	int n=0;
	while(sum){
		digit[n]=sum%c;
		sum/=c;
		n++;
	}
	if(!n) printf("0");
	else {
		for(;n>0;n--) {
			printf("%d",digit[n-1]);
		}	
	}
	return 0; 
}
