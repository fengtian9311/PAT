#include <cstdio>
#include <iostream>
using namespace std;
bool judge(char s[]){
	bool one_P=1,one_T=1;
	int n_P,n_T; 
	int i=0;
	int count=0;
	while(s[i]){
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T') return 0;
		i++;
		count++;
	}
	i=0;
	while(s[i]){
		if(s[i]=='P'){
			if (!one_P) return 0;
			one_P=0;
			n_P=i;
		} 
		if(s[i]=='T'){
			if (!one_T) return 0;
			one_T=0;
			n_T=i;
		}
		i++; 
	}
	if(n_P>n_T) return 0;
	int n1=n_P;
	int n2=n_T-n_P-1;
	int n3=count-n_T-1;
	while(n2>1){
		n2--;
		n3=n3-n1;
	}
	if(n2==1&&n1==n3) return 1;
	else return 0;
} 


int main(){
	int n;
	cin>>n;
	char input[10][101];
	for(int i=0;i<n;i++) cin>>input[i];
	for(int i=0;i<n;i++){
		if(judge(input[i])) printf("YES\n");
		else   printf("NO\n");
	}
	
	return 0;
} 
