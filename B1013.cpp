#include <cstdio>
#include <cmath>
bool is_prime(int n){
	if (n==2) return 1;
	for(int i=2;i<sqrt(n)+1;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n1,n2,count=0,out=0;
	scanf("%d %d",&n1,&n2);
	for(int i=2;count<n2;i++){
		if(is_prime(i)) {
			count++;
			if(count>=n1){
				out++;
				if(out%10==1) printf("%d",i);
				else printf(" %d",i);
				if(out%10==0) {
					printf("\n");
				}	
			}
		}
	}
	return 0;
}
