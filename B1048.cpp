#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char id[14]="0123456789JQK";
	char s1[110],s2[110],temp[110];
	int i=0 ;
	cin>>s1>>s2;
	int n=strlen(s1);
	if(strlen(s1)>strlen(s2)){
		for(i=0;i<strlen(s1)-strlen(s2);i++) temp[i]='0';
		temp[i]='\0';
		strcat(temp,s2);
		strcpy(s2,temp);
	}
	i=strlen(s1)-1;
	int j=strlen(s2)-1;
	bool is_odd=1;
	while(n--){
		if(is_odd){
			s2[j]=id[(s1[i]+s2[j]-2*'0')%13];
			is_odd=!is_odd;
		}
		else{
			s2[j]=(s2[j]-s1[i]>=0)?s2[j]-s1[i]+'0':s2[j]-s1[i]+'0'+10 ;
			is_odd=!is_odd;
		}
		i--;
		j--;
	}
	cout<<s2;
	return 0;
}
