#include <iostream>
#include <string.h> 
using namespace std;
int main(){
	char s[100010];
	int sum =0;
	int st[2]={0};
	cin.getline(s,100010);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a'&&s[i]<='z') sum+=s[i]-'a'+1;
		if(s[i]>='A'&&s[i]<='Z') sum+=s[i]-'A'+1;
	}
	//if(sum==0) st[0]++;
	while(sum){
		st[sum%2]++;
		sum/=2;	
	} 
	printf("%d %d",st[0],st[1]);
	return 0;
} 
