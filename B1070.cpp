#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int data[n];
	for(int i=0;i<n;i++) scanf("%d",&data[i]);
	sort(&data[0],&data[n]);
	double sum=data[0];
	for(int i=1;i<n;i++) sum=(sum+data[i])/2.0;
	printf("%0.lf",floor(sum));
	return 0;
}
