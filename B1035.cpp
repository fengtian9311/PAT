#include <cstdio>
#include <algorithm>
using namespace std;
void print_arr(int n,int l2[]){
	bool first =1;
	for(int i=0;i<n;i++){
		if(first){
			printf("%d",l2[i]) ;
			first=0;
		}
		else printf(" %d",l2[i]) ;
	}	
} 
int main(){
	char modle[2][20]={"Insertion Sort\n","Merge Sort\n"};
	int m=0;
	int n,l;
	int dis; 
	scanf("%d",&n);
	int l1[n],l2[n];
	for(int i=0;i<n;i++) scanf("%d",&l1[i]);
	for(int i=0;i<n;i++) scanf("%d",&l2[i]);


    int i=0,j=0;
    for (i = 0; i < n - 1 && l2[i] <= l2[i + 1]; i++);
    for (j = i + 1; l1[j] == l2[j] && j < n; j++);
    if(j!=n) m=1;
	/*if(l1[n-1]!=l2[n-1]) m=1;  test point 2 er
	else{
		int t=n-2 ;
		while(l1[t]==l2[t]) t--;
		l=t; 
		for(int i=t;t>=1;t--){
			if(l2[t]<l2[t-1]) {
				m=1;
				break; 
			}			
		}
	}
    */
	printf("%s",modle[m]);
    
	if(m==0){
		sort(&l2[0],&l2[i+2]);
		print_arr(n,l2);
	}
	else{
		bool flag = 1;
		for(int i=4;flag&&i<n;i=2*i){
			for(int j=i/2-1;j+1<n;j=j+i){
				if(l2[j]>l2[j+1]){
					dis=i/2;
					flag =0;
					break;
				}
			}	
		}
		dis*=2;
		for(int i=0;i<n;i=i+dis){
			if(i+dis>=n) sort(&l2[i],&l2[n]);
			else sort(&l2[i],&l2[i+dis]);
		}
		print_arr(n,l2);
	}
	return 0;
}
