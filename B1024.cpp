#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char sig1,sig2;
	char c1[10010];
	int power;
	sig1=getchar();
	c1[0]=getchar();
	getchar();
	cin.getline(&c1[1],10010,'E');
	sig2=getchar();
	cin>>power;
	if(power==0) sig2='+';
	if(sig1=='-') cout<<"-";
	if(sig2=='-'){
		printf("0.");
		for(int i=0;i<power-1;i++) cout<<"0";
		cout<<c1;
	}
	if(sig2=='+'){
		if(power>=strlen(c1)-1){
			cout<<c1;
			for(int i=0;i<power-strlen(c1)+1;i++) cout<<"0";
		}
		else if(power==strlen(c1)-1){
			cout<<c1;
		}
		else{
			for(int i=0;i<power+1;i++) cout<<c1[i];
			cout<<".";
			for(int i=power+1;i<strlen(c1);i++) cout<<c1[i];
		}	
	}
	return 0;
}
