#include <cstdio>
#include <iostream>
using namespace std;
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2} ;
char last[11]={'1','0','X','9','8','7','6','5','4','3','2'};
bool trans(char id[]) {
	int sum=0;
	bool good = 1; 
	for(int i=0;i<17;i++){
		if((id[i]>='0')&&(id[i]<='9')) sum+= (id[i]-'0')*weight[i];
		else {
			good=0;
			break;
		}
	} 
	sum%=11;
	if(id[17]!=last[sum]) good=0;
	if(good) return 1;
	else return 0;
}

int main(){ 
	int n,a;
	cin>>n;
	char id[n][20];
	bool flag =1;
	for(int i=0;i<n;i++) cin>>id[i];
	for(int i=0;i<n;i++) {
		if(!trans(id[i])){
			printf("%s\n",&id[i]);
			flag = 0;
		}	
	}
	if (flag) printf("All passed\n");
	return 0;
}
	
