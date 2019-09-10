#include <cstdio>
int main(){
	int n_t=0,n_f=0;
	int sum[128]={0};
	char s1[1001],s2[1001];
	scanf("%s %s",s1,s2);
	int i=0;
	while(s1[i]) {
		++(sum[s1[i]]);
		i++;	
		n_t++; 
	}
	i=0;
	while(s2[i]){
		--(sum[s2[i]]);
		n_t--;
		if (sum[s2[i]]<0) n_f++;
		i++;
	} 		
	if(n_f>0) printf("No %d",n_f);
	else printf("Yes %d",n_t);
	return 0;
} 
