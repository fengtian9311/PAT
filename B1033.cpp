#include <cstdio>
bool judge(char c,char broken[],bool shift){
	int j=0;
	if(!shift&&c>='A'&&c<='Z') return 0;
	while(broken[j]){
		if(c==broken[j])  return 0;
		if(c>='a'&&c<='z'&&c-32==broken[j])  return 0;
		j++;
	}
	return 1;
}
int main(){
	char c;
	char broken[200];
	char input[100001];
	bool shift=1,flag=1;
	c=getchar();
	if(c!='\n'){
		broken[0]=c;
		scanf("%s",&broken[1]);
	} 
	else broken[0]='\0';
	scanf("%s",&input);
	int i=0;
	while(broken[i]){
		if(broken[i]=='+') shift=0;
		i++;
	}
	i=0;
	while(input[i]){
		if(judge(input[i],broken,shift)){
			printf("%c",input[i]);
			flag=0;
			}
		i++;
	}
	if(!flag) printf("\n");
	return 0;
}
