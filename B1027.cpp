#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,r,num;
	char c; 
	cin >> n >> c;
	num=floor(sqrt((n+1)/2));
	r=n-2*num*num+1;
	for(int i=0;i<num;i++){
		for(int j=0;j<i;j++) printf(" ");
		for(int j=0;j<2*num-2*i-1;j++) printf("%c",c);
		//for(int j=0;j<i;j++) printf(" ");
		printf("\n");
	}
	for(int i=1;i<num;i++){
		for(int j=0;j<num-1-i;j++) printf(" ");
		for(int j=0;j<2*i+1;j++) printf("%c",c);
		//for(int j=0;j<num-1-i;j++) printf(" ");
		printf("\n");
	}
	printf("%d",r);
	return 0; 
}
 
