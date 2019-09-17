#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char s1[1010];
	char modle;
	modle=getchar();
	getchar();
	cin.getline(s1,1010);
	if(modle=='C'){
		char c=s1[0];
		int count=1;
		if(strlen(s1)==1) printf("%c",s1[0]);
		for(int i=1;i<strlen(s1)+1;i++){
			if(s1[i]!=c){
				if(count>1) printf("%d%c",count,c);
				else printf("%c",c);
				c=s1[i];
				count=1;
			}
			else count++;
		}	
	}
	if(modle=='D'){
		int count=0; 
		for(int i=0;i<strlen(s1);i++){
			if(s1[i]>='0'&&s1[i]<='9') count=10*count+s1[i]-'0';
			else{
				if(count){
					for(int j=0;j<count;j++) printf("%c",s1[i]);
					count=0;
				}
				else printf("%c",s1[i]);
			}
		}	
	}
	return 0;
}
