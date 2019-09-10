#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int n;
	int a,b;
	double r,max=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		r=sqrt(a*a+b*b);
		max=(r>max)?r:max;
	}
	cout<<setprecision(2)<<fixed<<max;
    return 0;
}
