#include <cstdio>
const int maxn=11;
int n,hashTable[maxn],p[maxn]={0},count=0;
void generateP(int index){
	if(index==n+1){
		bool flag=1;
		for(int i=1;i<9;i++){
			for(int j=i+1;j<9;j++){
				if(j-i==p[j]-p[i]||j-i==p[i]-p[j])  flag=0;
			}
		}
		if(flag) count++;
	}
	for(int i=1;i<=n;i++){
		if(!hashTable[i]){
			p[index]=i;
			hashTable[i]=1; 
			generateP(index+1);
			hashTable[i]=0;
		}	
	}	
}
int main(){
	n=8;
	generateP(1);
	printf("%d",count);
	return 0;
}
