#include <iostream>
#include <string.h>
using namespace std;
int main(){
	bool st[256]={0};
	char s1[90],s2[90];
	cin.getline(s1,90);
	cin.getline(s2,90);
	int j=0;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]!=s2[j]){
			if(s1[i]>='a'&&s1[i]<='z') s1[i]-=32;
			if(!st[s1[i]]) {
				printf("%c",s1[i]);
				st[s1[i]]=1;
			}
		}
		else j++;
	}	
	return 0;
}
