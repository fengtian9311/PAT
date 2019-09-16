#include <iostream>
#include <algorithm>
using namespace std;
int shift_num(int num[4]){
	return num[0]*1000+num[1]*100+num[2]*10+num[3];
}
void shift_arr(int n,int num[4]){
	for(int i=0;i<4;i++){
		num[3-i]=n%10;
		n/=10;
	}
}
void printf_arr(int num[4]){
	cout<<num[0]<<num[1]<<num[2]<<num[3];
}
int cmp_re(int a,int b){
	return a>b;
} 
int main(){
	int n,num[4];
	int t1,t2,t3;
	cin>>n;
	shift_arr(n,num);
	if(num[0]==num[1]&&num[0]==num[2]&&num[0]==num[3]) cout<<num[0]<<num[0]<<num[0]<<num[0]<<" - "<<num[0]<<num[0]<<num[0]<<num[0]<<" = 0000";
	else{
		while(1){
			sort(&num[0],&num[4],cmp_re);
			t1=shift_num(num);
			printf_arr(num);
			cout<<" - ";
			sort(&num[0],&num[4]);
			t2=shift_num(num);
			printf_arr(num);
			cout<<" = ";
			t3=t1-t2;
			printf("%04d",t3);
			if(t3==6174) break;
			printf("\n");
			for(int i=0;i<4;i++){
				num[i]=t3%10;
				t3/=10;
			}
		}
	}
	return 0;
}
