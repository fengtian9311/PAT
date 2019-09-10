#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	int c1,c2,c3;
	char c;
	cin>>a1>>c>>a2>>c>>a3;
	cin>>b1>>c>>b2>>c>>b3;
	c1=b1-a1;
	c2=b2-a2;
	c3=b3-a3;
	if(c1*17*29+c2*29+c3<0) {
		c1=-c1;
		c2=-c2;
		c3=-c3;
		cout<<"-";
	}
	
	while(c3<0) c3+=29,c2--;
	while(c2<0) c2+=17,c1--;
	cout<<c1<<"."<<c2<<"."<<c3;
    return 0;
}
