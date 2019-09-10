#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int num[1000][2]={0};
	bool flag=1;
	int n=0;
	int i=0;
	do{
		cin>>num[n][0]>>num[n][1];
	}
	while(num[n++][1]);
	if (n==1) cout<<"0 0";
	while(i != n-1){
		if(flag) 
		{
			cout<<num[i][0]*num[i][1]<<' '<<num[i][1]-1;
			flag=0;
		}
		else cout<<' '<<num[i][0]*num[i][1]<<' '<<num[i][1]-1;
		
		i++;
	}
	return 0;
}
