#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char input[1001];
	char out[1001]={0};
	cin>>input>>n;
	int i=0,temp=0;
	while(input[i]){
		temp=10*temp+input[i]-'0';
		out[i]=temp/n+'0';
		temp%=n;
		i++;
	}
	if(out[0]=='0'&&out[1]) {
		for(int i=1;out[i];i++) printf("%c",out[i]);	
	}
	else cout<<out;
	cout<<' '<<temp;
	return 0;
}
