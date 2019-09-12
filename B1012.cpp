#include <cstdio>
#include <vector>
using namespace std;
int main(){
	int n,temp;
	scanf("%d",&n);
	vector<int>a1,a2,a3,a4,a5;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		switch(temp%5){
			case 0:a1.push_back(temp);break;
			case 1:a2.push_back(temp);break;
			case 2:a3.push_back(temp);break;
			case 3:a4.push_back(temp);break;
			case 4:a5.push_back(temp);break;
		}
	}
	int sum1=0,sum2=0,sum4=0,n5;
	for(int i=0;i<a1.size();i++){
		if(a1[i]%2==0) sum1+=a1[i]; 
	}
	bool flag=1;
	for(int i=0;i<a2.size();i++){
		sum2=sum2+(flag?1:-1)*a2[i];
		flag=!flag; 
	}
	
	for(int i=0;i<a4.size();i++){
		sum4+=a4[i]; 
	}
	double n4=(double)sum4/a4.size();
	if(a5.size()) n5=a5[0];
	for(int i=0;i<a5.size();i++){
		if(a5[i]>n5)  n5=a5[i];
	}
	if(!a1.size()||sum1==0) printf("N");
	else printf("%d",sum1);
	if(!a2.size()) printf(" N");
	else printf(" %d",sum2);
	if(!a3.size()) printf(" N");
	else printf(" %d",a3.size());
	if(!a4.size()) printf(" N");
	else printf(" %0.1f",n4);
	if(!a5.size()) printf(" N");
	else printf(" %d",n5);
	return 0;
}
