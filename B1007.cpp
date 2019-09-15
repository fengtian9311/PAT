#include <cstdio>
#include <cmath>
bool is_prime(int n){
	for(int i=2;i<sqrt(n)+1;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,count=0;
	scanf("%d",&n);
	for(int i=3;i<n-1;){
		if(is_prime(i)&&is_prime(i+2))  count++;
		i=i+2;
	}
	printf("%d",count);
	return 0;
}
