#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int st[256]={0};
	char s[1010];
	cin.getline(s,1000);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
		st[s[i]]++;
	}
	int max=0;
	char max_c;
	for(int i='a';i<'z'+1;i++){
		if(st[i]>max){
			max=st[i];
			max_c=i;
		}
	}
	printf("%c %d",max_c,max);
    return 0;
}
