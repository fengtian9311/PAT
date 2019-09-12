#include <cstdio>
int main(){
    int n;
    char input[4];
    scanf("%d",&n);
    int out[n];
    for(int i=0;i<n;i++){
    	int t=4;
    	while(t--){
    		scanf("%s",&input);
        	if(input[2]=='T') out[i]=input[0]-'A'+1;
		}
    }
    for(int i=0;i<n;i++) printf("%d",out[i]);
    return 0;
}
