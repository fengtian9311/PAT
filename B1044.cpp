#include <iostream>
#include <string.h>
#include <cctype>
using namespace std; 
int main(){
	int n;
	char low[13][5] ={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	char hieht[13][5]={" ","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	cin>>n;
	getchar(); 
	char s[n][30];
	char out[n][30];
	for(int i=0;i<n;i++) cin.getline(s[i],30);
	for(int i=0;i<n;i++){
		if(isdigit(s[i][0])){
			int temp=0 ; 
			for(int j=0;j<strlen(s[i]);j++) temp=10*temp+s[i][j]-'0';
			if(temp/13&&temp%13)	printf("%s %s",hieht[temp/13],low[temp%13]);
			else if(temp/13&&!(temp%13)) printf("%s",hieht[temp/13]);
			else printf("%s",low[temp%13]);
		}
		else{
			int t1=0,t2;
			char s1[5];
			if(strlen(s[i])==3) {
				for(int j=1;j<13;j++){
					if(!strcmp(s[i],hieht[j])){
						t1=j*13;
						printf("%d",t1);
						break;
					}
					if(!strcmp(s[i],low[j])){
						t1=j;
						printf("%d",t1);
						break;
					}	
				} 
			}
			if(strlen(s[i])==4) printf("0");
			if(strlen(s[i])==7||strlen(s[i])==8){ 
				for(int j=0;j<3;j++) s1[j]=s[i][j];
				s1[3]=0; 
				for(int j=1;j<13;j++){
					if(!strcmp(s1,hieht[j])) t2=j;
				}
				for(int j=0;j<3;j++) s1[j]=s[i][j+4];
				for(int j=1;j<13;j++){
					if(!strcmp(s1,low[j])) t1=j;
				}
				printf("%d",t2*13+t1); 
			}
		}
		printf("\n");	
	}
	return 0; 
} 
