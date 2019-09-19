#include <cstdio>
#include <string.h>
using namespace std; 
int main(){
	char s[100010];
	int left_p[100010],right_t[100010];
	scanf("%s",&s);
	int n=strlen(s);
	int cnt_p=0,cnt_t=0;
	for(int i=0;i<n;i++){
		if(s[i]=='P') cnt_p++;
		if(s[i]=='T') cnt_t++;
	}
	if(s[0]=='T') cnt_t--;
	if(s[n-1]=='P') cnt_p--;
	right_t[0]=cnt_t;
	left_p[n-1]=cnt_p;
	for(int i=1;i<n;i++){
		if(s[i]!='T') right_t[i]=right_t[i-1];
		else  right_t[i]=right_t[i-1]-1;
	}
	for(int i=n-2;i>=0;i--){
		if(s[i]!='P') left_p[i]=left_p[i+1];
		else  left_p[i]=left_p[i+1]-1;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A') sum=(sum+left_p[i]*right_t[i])%1000000007;
	}
	printf("%d",sum);
	return 0; 
} 
