#include <cstdio>
int main(){
	int n;
	scanf("%d",&n);
	double num[n];
	for(int i=0;i<n;i++) scanf("%lf",&num[i]);
	double sum=0;
	for(long long int i=0;i<n;i++) sum=sum+(i+1)*(n-i)*num[i];	
	printf("%0.2lf",sum);
	return 0; 
} 
