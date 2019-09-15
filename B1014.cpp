#include <cstdio>
int main(){
	char s1[61],s2[61],s3[61],s4[61];
	scanf("%s%s%s%s",&s1,&s2,&s3,&s4);
	bool first=1;
	char a1,a2;
	int t;
	for(int i=0;s1[i]&&s2[i];i++){
		if(s1[i]==s2[i]){
			if(!first){
				if((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9')){
					a2=s1[i];
					break;
				} 
			}
			if(first){
				if(s1[i]>='A'&&s1[i]<='G'){
					a1=s1[i];
					first=0;
				}
			}
			
		}
	}
	for(int i=0;s3[i]&&s4[i];i++){
		if((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z')){
			if(s3[i]==s4[i]){
				t=i;
				break;
			}
		}
	}
	switch(a1){
		case 'A':printf("MON ");break;
		case 'B':printf("TUE ");break;
		case 'C':printf("WED ");break;
		case 'D':printf("THU ");break;
		case 'E':printf("FRI ");break;
		case 'F':printf("SAT ");break;
		case 'G':printf("SUN ");break;	
	} 
	int h=(a2>='0'&&a2<='9')?a2-'0':a2-'A'+10;
	printf("%02d:%02d",h,t);
	return 0;
}
