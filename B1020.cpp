#include<iostream>
#include<algorithm>
using namespace std;
struct goods{
		double num;
		double totol_price;
		double price;
};
bool cmp(struct goods a,struct goods b) {
	return a.price>b.price;
}
int main()
{
	int n,max;
	cin>>n>>max;
	struct goods mk[n];	
	for(int i=0;i<n;i++){
		cin>>mk[i].num;
	}
	for(int i=0;i<n;i++){
		cin>>mk[i].totol_price;
		mk[i].price=mk[i].totol_price/(double)mk[i].num;
	}
	double income=0;
	sort(&mk[0],&mk[n],cmp);
	for(int i=0;i<n;i++){
		if(mk[i].num<=max){
			 income+= mk[i].totol_price;
			 max-=mk[i].num;
		}
		else{
			income+=mk[i].price*max;
			break;
		}
	}
	printf("%0.2f",income);
	return 0;
}
