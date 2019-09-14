#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int input[n+1];
	bool dig[100][300]={0};
	int temp;
	for(int i=0;i<n;i++) cin>>input[i];
	sort(&input[0],&input[n]);
	for(int i=0;i<n;i++){
		temp=input[i];
		while(temp!=1){
			if(temp%2) {
				temp=(3*temp+1)/2;
				dig[i][temp]=1;
			}
			else{
				temp=temp/2;
				dig[i][temp]=1;
			} 
		} 	
	}
	bool first=1;
	bool out=1;
	for(int i=n-1;i>=0;i--){
		out=1;
		for(int j=0;j<n;j++){
			if(dig[j][input[i]]){
				out=0;
				break;
			}
		}
		if(out) {
			if(first) {
				cout<<input[i];
				first=0; 
			}
			else cout<<' '<<input[i];
		}
	}
	return 0;
}
