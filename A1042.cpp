#include <cstdio>
int main(){
	int n,temp;
	bool first=1;
	scanf("%d",&n);
	int order[54],state1[54],state2[54];
	for(int i=0;i<54;i++){
		scanf("%d",&order[i]);
		state1[i]=i;
		state2[i]=i;
	}
	while(n--){
		for(int i=0;i<54;i++){
			state2[order[i]-1]=state1[i];
		}
		for(int i=0;i<54;i++) state1[i]=state2[i];
	}
		char sig[5]={'S','H','C','D','J'};
	for(int i=0;i<54;i++)
	{
		if(first){
		printf("%c%d",sig[(state2[i])/13],(state2[i])%13+1);
		first=0;
		}
		else printf(" %c%d",sig[(state2[i])/13],(state2[i])%13+1);
	}
	return 0;
}
